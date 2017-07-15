
/*
    BLE_echo
    
    Test a serial connection to a HM-10
    BLE module by reading incoming data
    and writing it back out the serial
    port.
    
*/

const int BUFF_LEN = 21;      // serial buffer length

char sBuff[BUFF_LEN];         // serial buffer

void setup()
{
  Serial.begin(9600);      // open serial port
  
  Serial.setTimeout(20);  // timeout defaults to 1000 ms

}

void loop()
{

  // if bytes available 
  if( Serial.available() )
  {
    // read into buffer
    int bytesRead = Serial.readBytes(sBuff, BUFF_LEN);
    
    // echo read bytes to serial port
    for(int i=0; i < bytesRead; i++) Serial.write(sBuff[i]);

    // write newline
    Serial.println();

    
  } // if


}





