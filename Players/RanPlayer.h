/*
 * RanPlayer.h
 *
 *  Created on: Aug 29, 2016
 *      Author: lenz
 */

#ifndef RANPLAYER_H_
#define RANPLAYER_H_

#include "Player.h"
#include <iostream>
#include <stdlib.h>


class RanPlayer: public Player {
public:
	RanPlayer();
	RanPlayer(int, Session*);
	virtual ~RanPlayer();
};

#endif /* RANPLAYER_H_ */
