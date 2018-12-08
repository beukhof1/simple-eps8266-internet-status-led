#include <ESP8266WiFi.h>
#include <ESP8266Ping.h>
#include <NeoPixelBus.h>

const char* ssid     = "your_ssid";
const char* password = "your_pass";

const char* remote_host = "www.google.com";

const uint16_t PixelCount = 16;
const uint8_t PixelPin = D4;

NeoPixelBus<NeoGrbFeature, NeoEsp8266Uart800KbpsMethod> strip(PixelCount, PixelPin);

void setup() {
  
  strip.Begin();
  strip.ClearTo(RgbColor(0,135,255));
  strip.Show();
  
  Serial.begin(115200);
  delay(10);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println("Connecting to WiFi");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("WiFi connected with ip ");  
  Serial.println(WiFi.localIP());

}

void loop() { 
  
  Serial.print("Pinging host");
  Serial.println(remote_host);

  if(Ping.ping(remote_host,1)) {
    Serial.println("Success!!");
    strip.ClearTo(RgbColor(150,255,0)); //kinda green
  
  } else {
    Serial.println("Error :(");
    strip.ClearTo(RgbColor(255,50,0)); //kinda red
  }
  strip.Show();  //update colors

  delay(10000);  //delay 10 sec
  
}
