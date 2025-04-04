#include <EdgeStream.h> 

EdgeStream stream;

void setup() {
  stream.begin();
}

void loop() {
  // Define the sensor name and sample sensor values (can be replaced with actual sensor data)
  const char* sensorName = "GridEye";
  vector<double> sensorValues (64); // Here we are taking a 8 * 8 px image
  for(unsigned char i = 0; i<64; i++)
    {
      sensorValues[i] = random(25.0, 30.0);
    }

  // Log the sensor data to the Serial Monitor
  stream.logData(sensorName, sensorValues);

  // Delay of 0.1 second before the next loop iteration
  delay(100);
}
