/*
 * MimicGame.h
 *
 *  Created on: 30 Jul 2013
 *      Author: alex
 */

#ifndef MIMICGAME_H_
#define MIMICGAME_H_

#include <Game.h>
#include <ros/ros.h>

#include <nao_msgs/WordRecognized.h>
#include <Phrase.h>

#include <string>
#include <vector>
#include <list>

class MimicGame : public Game {

public:
	MimicGame(GameSettings&);

	void startGame(void);
	void perform(void);
	void endGame(void);

private:
	ros::NodeHandle _mimicNodeHandle;
};

#endif /* MIMICGAME_H_ */
