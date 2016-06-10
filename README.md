LINE FOLLOWING OBSTACLE AVOIDING ROBOT

Line Following Robot:
A line following Robot is a robot (usually a vehicle) which follows a distinguished colored path (usually a black lined path). It consists of several electronic components which makes it follow (usually with tires) a programmed path. The main component of such robot is a microcontroller which is the brain of the robot.
 

Obstacle Avoiding Robot:
An Obstacle Avoiding Robot is a robot (usually a vehicle) which follows a straight path but if any obstruction is present/introduced in its path then the robot avoids its collision with the obstruction (usually by stopping before the obstruction or by changing path). It consists of several electronic components which makes it follow (usually with tires) a programmed path and avoid collision. The main component of such robot is a microcontroller which is the brain of the robot.
 
A Line Following Obstacle Avoiding Robot is a Robot (usually a vehicle) which have both the characteristics of Line Following Robot and Obstacle Avoiding Robot i.e., it follows a programmed path (usually a black line) and avoids any obstacle on the way.

Working:
These robots are pretty cheap and easy to design. Some sensors are used to detect the colored line on the path and any obstruction on the path. The robot then responds to the sensors reading which is defined by programmer in the microcontroller program. 
This robot can follow a thick line (at least of 1 inch) perfectly (even the most complex paths consisting of obtuse/acute angle turns and intersection of those black lines.
The robot starts when the battery is connected but the speed of robot is slow. Therefore, another battery is then connected to provide more power to motors and hence the robot moves comparatively faster.
When the two Infrared sensors connected at both sides of robot senses white path then the two motors rotate clockwise and the robot moves forward. Similarly, when the Infrared sensors senses black path then also the two motors rotate clockwise and the robot moves forward. Hence, when the robot senses intersection of black lines then it moves straight.
When one of the Infrared sensors (say right side) senses a black path while the other one (say left one) senses a white path, then the path is turning towards right, hence the robot moves right. To make the robot move right, the right motor stays stationary and left motor rotates clockwise, hence robot takes right turn.
When one of the Infrared sensors (say left side) senses a black path while the other one (say right one) senses a white path, then the path is turning towards left, hence the robot moves left. To make the robot move left, the left motor stays stationary and right motor rotates clockwise, hence robot takes right turn.
To take a sharp right turn, make the left motor rotate clockwise while making the right motor rotate anticlockwise.
To take a sharp left turn, make the right motor rotate clockwise while making the left motor rotate anticlockwise.
When the ultrasonic sensor in front of the robot senses any obstruction (in range of 20 cm) while moving forward then the motors stops rotating and the robot stops. The robot starts moving as soon as the obstruction is removed. 
