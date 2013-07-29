/*
 * recorder_tester.cpp
 *
 *  Created on: 8 Jul 2013
 *      Author: tristan
 */

#include <ros/ros.h>
#include <nao_autism_messages/Record.h>

int main(int argc, char **argv) {
	ros::init(argc, argv, "recorder_tester");

	ros::NodeHandle nh;
	ros::Publisher pub = nh.advertise<nao_autism_messages::Record>("record", 10);

	ros::Rate rate(1);
	int count = 0;

	while (ros::ok()) {
		nao_autism_messages::Record msg;

		if (count >= 6)
			count = 0;

		if (count == 5) {
			ROS_INFO("Record now!");
			msg.record = true;
		} else {
			ROS_INFO("Stop now!");
			msg.record = false;
		}

		pub.publish(msg);

		ros::spinOnce();

		rate.sleep();
		count++;
	}
}


