/*
 * Game.h
 *
 *  Created on: 29 Jul 2013
 *      Author: tristan
 */

#ifndef GAME_H_
#define GAME_H_

#include <GameSettings.h>
#include <nao_control/NaoControl.h>

class Game {
public:
	virtual Game(GameSettings gs) : _settings(gs) { }
	virtual ~Game() { }

	virtual void perform(void) = 0;
	bool isDone;

protected:
	virtual void startGame(void) = 0;
	virtual void endGame(void) = 0;
	nao_control::NaoControl _naoControl;

private:
	GameSettings _settings;
};


#endif /* GAME_H_ */