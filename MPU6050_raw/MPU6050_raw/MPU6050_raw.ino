#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"

MPU6050 accelgyro;

int16_t ax, ay, az;
int16_t gx, gy, gz;
int nval = -8196, pval = 8196;

void setup() {
  Wire.begin();
  Serial.begin(38400);

  accelgyro.initialize();
//  accelgyro.setFullScaleAccelRange(MPU6050_ACCEL_FS_8);
  accelgyro.getAcceleration(&ax,&ay,&az);

  Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
}

void loop() {
  accelgyro.getAcceleration(&gx, &gy, &gz);
  Serial.print("a/g:\t");
//  Serial.print(gx-ax); Serial.print("\t");
//  Serial.print(gy-ay); Serial.print("\t");
//  Serial.println(gz-az);
//  Serial.print(map(gx-ax,nval,pval,-180,180)); Serial.print("\t");
//  Serial.print(map(gy-ay,nval,pval,-180,180)); Serial.print("\t");
//  Serial.println(map(gz-az,nval,pval,-180,180));
  delay(250);
}
