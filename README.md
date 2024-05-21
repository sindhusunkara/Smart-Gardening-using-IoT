# Smart-Gardening-using-IoT
Smart gardening using the Internet of Things (IoT) involves integrating advanced technology into gardening practices to enhance efficiency, monitor plant health, and optimize resources
ARCHITECTURE DIAGRAM

 
                            
                              
The above architecture diagram depicts the connections between sensors and the flow of the process of the proposed method

 
Figure 25. Architecture Diagram for proposed method

Architecture Diagram Explanation

•	The system can detect the soil moisture level based on which it will inform the user whether to turn ON the motor or not and also detects unauthorized entry into the garden. 
•	It consists of a soil moisture sensor that can predict the soil’s moisture level when placed in the soil.
•	It consists of a PIR sensor that detects any objects entering the range and sends the result to the user
•	It consists of BMP280 Sensor which measures humidity and atmospheric pressure in the air. These sensors are connected to the ESP32 Board, which is connected to the computer through a USB wire.
•	When we compile and upload code in Arduino it displays output in the Serial monitor. It transfers the soil moisture data, temperature, pressure, humidity, and motor status to the firebase using firebase credentials. After the successful uploading of code the data get transferred to firebase we can view output in a real-time database. 
•	Using Kodular, we can design the app in the way we want our results and have to build blocks to get desired output. After scanning through kodular companion we will able to see the output in our Mobile App.
•	It is an effective method of detecting the plant's needs and giving it water when the soil becomes drier. Additionally, it aids in protecting the garden from animals and birds. This helps to keep the plant healthy.

3.2.2 MODULES-CONNECTIVITY DIAGRAM
Modules of the proposed method
   Data Collection and User Interface
   Detection of Soil properties and unauthorized entry
   Data Processing
   Updating details in Firebase and in Mobile App



  Connectivity Diagram of the Proposed Method
 
                                              

3.2.3 SOFTWARE AND HARDWARE REQUIREMENTS
To work on this project various components were required namely
1.	Hardware Requirements
Hardware requirements refer to the specific physical components and devices that a computer system needs in order to function properly. These components can include things like the processor, memory, storage, and other peripherals. The specific hardware requirements for a system will depend on the intended use of the system and the software that will be running on it. For example, a computer that will be used for gaming will have different hardware requirements than a computer that will be used for basic office tasks or web browsing. In general, it is important to ensure that the hardware components of a computer are compatible with each other and with the operating system that will be running on the system. It is also important to consider factors such as performance, reliability, and power consumption when choosing hardware components. When selecting hardware for a computer system, it is important to consider the following factors: 
•	Processor: The central processing unit (CPU) is the brain of the computer, responsible for executing most of the instructions that the computer carries out. A faster processor will generally be able to handle more complex tasks and run more demanding software more quickly than a slower processor.
•	Memory: Memory, or RAM, is used to store data that the processor is currently working on. A larger amount of memory will allow the computer to run more programs at the same time without slowing down.
•	Storage: Storage is used to store data on the computer, such as documents, photos, and programs. There are several types of storage available, including hard drives, solid-state drives, and cloud storage. The type and amount of storage you need will depend on the amount of data you need to store and the speed at which you need to access it.
•	Graphics card: A graphics card is responsible for rendering images and video on the computer's display. A more powerful graphics card will be able to handle more complex graphics and higher resolutions.
•	Peripherals: Peripherals are devices that are connected to the computer, such as a keyboard, mouse, printer, or scanner. The specific peripherals you need will depend on your intended use of the computer and your personal preferences.
It is important to carefully consider the hardware requirements of a computer system to ensure that it will meet your needs and be able to run the software you need to use. If you are unsure about the hardware requirements for a particular task or software, it is a good idea to consult the manufacturer or a technical support specialist for guidance.
ESP32 Microcontroller
The ESP32 is a microcontroller developed by Espressif Systems. It is a low-power, low-cost device that is well-suited for Internet of Things (IoT) applications. The ESP32 is based on a dual-core processor, with each core running at a clock speed of up to 240 MHz. It also includes a built-in Wi-Fi module and Bluetooth Low Energy (BLE) support, making it an ideal choice for IoT applications that require wireless connectivity.
Some key features of the ESP32 microcontroller include:
•	Dual-core processor: The ESP32 has two processor cores, allowing it to execute multiple instructions simultaneously.
•	Wi-Fi and BLE support: The ESP32 has built-in support for Wi-Fi and BLE, making it easy to connect to the internet or other devices wirelessly.
•	Low power consumption: The ESP32 has been designed to be energy efficient, making it well-suited for use in battery-powered IoT devices.
•	Large range of supported peripherals: The ESP32 has a wide range of peripherals available, including UART, SPI, I2C, ADC, and PWM, making it easy to interface with a wide variety of sensors and other devices.
•	Rich software ecosystem: There are a large number of software libraries and tools available for the ESP32, making it easy to develop applications for the microcontroller.
Overall, the ESP32 is a powerful and flexible microcontroller that is well-suited for a wide range of IoT applications. If you are considering using the ESP32 in a project, you may want to consider the specific hardware requirements and capabilities of the device to ensure that it meets your needs.
The ESP32 has a rich software ecosystem, with a large number of libraries and tools available for development. It can be programmed using a variety of programming languages, including C, C++, and Python. The ESP32 is also supported by the Arduino platform, making it easy to develop applications using the Arduino Integrated Development Environment (IDE).One of the key features of the ESP32 is its low power consumption. It has been designed to be energy efficient, making it well-suited for use in battery-powered IoT devices. It also has a number of low-power modes that can be used to further reduce power consumption when the device is not in use.



 
                                     
  
GISMO-VI
It is a board that consists of ESP-01 WiFi module along with polarized connection for various sensors like the soil moisture sensor, ultrasonic sensor, etc. It has the following resources . 
●   Arduino Nano 
●   ESP-01 WiFi module 
●   DHT11 Temperature & RH sensor 
●   LDR
●   Relay 
●   MAX485 for RS485 communication
●   XBee base 
●   On-board 3.3V generation 
●   A1-A7 pins extended out to header
The given figure shows the GISMO-VI board which contains all sensors connectivity pins and ESP32 board to connect USB wire 
 
                                                  

Soil Moisture Sensor
A soil moisture sensor is a device that measures the amount of moisture present in the soil. There are a variety of soil moisture sensors available on the market, each with its own set of features and capabilities. Some soil moisture sensors are designed to be inserted into the soil, while others can be placed on the surface of the soil or buried shallowly. Soil moisture sensors work by measuring the electrical conductivity of the soil, which is related to the amount of water present in the soil. When soil is dry, it has low conductivity, while when it is moist, it has higher conductivity. Soil moisture sensors use this relationship to determine the moisture content of the soil. There are a number of applications for soil moisture sensors, including irrigation control, monitoring plant health, and predicting crop yield. They can be used in agriculture, horticulture, and landscaping, as well as in residential and commercial settings. Soil moisture sensors can help conserve water by allowing irrigation systems to be automated and tailored to the specific needs of the plants being grown. They can also help prevent over-watering, which can lead to water waste and plant damage.




 
                                        

BMP280 Sensor
The BMP280 sensor is a digital pressure sensor developed by Bosch Sensortec. It is designed to measure atmospheric pressure and temperature with high accuracy and low power consumption. The BMP280 sensor uses a piezoresistive pressure sensor to measure atmospheric pressure. The pressure sensor consists of a small, flexible membrane that is deformed by the pressure of the surrounding air. The deformation of the membrane changes the resistance of the sensor, which is measured by the sensor's internal circuitry and used to calculate the atmospheric pressure. A temperature sensor that gauges the sensor's internal temperature is also a part of the BMP280 sensor. By using this temperature measurement to make up for temperature-related mistakes in the pressure measurement, accuracy is increased. The BMP280 sensor is suitable for a wide range of applications since it is small, low power, and simple to use. In addition to being utilized frequently in weather stations and other atmospheric sensing systems, portable and wearable electronics also frequently use it. Overall, the BMP280 sensor is a helpful device for accurately and efficiently monitoring temperature and air pressure. It is frequently employed in many different applications.
Some of its key specifications include:
•	Operating range: 300-1100 hPa (equivalent to +9000 to -500m above/below sea level)
•	Accuracy: ±1 hPa (equivalent to ±3.3m above/below sea level)
•	Resolution: 0.01 hPa (equivalent to 0.3m above/below sea level)
•	Output data rate: 0.5 to 64 samples per second
•	Operating temperature range: -40 to +85°C
•	Operating humidity range: 0-100% relative humidity
•	Interface: I2C or SPI

 
    
PIR Sensor
An electronic sensor that measures the infrared (IR) light emitted by objects in its field of vision is known as a passive infrared sensor (PIR sensor). Most frequently, they are utilized in PIR-based motion detectors. PIR sensors are frequently utilized in autonomous lighting and security alarm systems. PIR sensors can detect movement in general but cannot identify who or what moved. An imaging IR sensor is necessary for that purpose. An electrical gadget called a passive infrared sensor (PIR) measures IR light emitted by objects in its range of vision. To track the movement of people and animals, motion detector systems most frequently employ it. Home security systems, automatic lighting systems, and other automated systems frequently use PIR sensors.  When a warm body moves, PIR sensors can detect variations in the amount of IR radiation that is impinging on them. They are utilized in systems like burglar alarms and illumination that turn on when someone enters a room. The three-pin connection used by PIR sensors normally consists of a power pin, a ground pin, and an output pin. The three-pin connection used by PIR sensors normally consists of a power pin, a ground pin, and an output pin. The output receives a signal from the sensor when it notices movement. pin, which can be used to start any system, including an alarm or a light. PIR sensors normally have a field of view between 120 and 180 degrees, and its range is only about 8 meters, which is quite close. They are not susceptible to constant radiation, only to variations in IR radiation. PIR sensors are a desirable option for home security and automation systems due to their low cost. Additionally, they are quite simple to install.

