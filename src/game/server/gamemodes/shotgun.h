/* sCTF - CTF only with shotgun - 1Shot1Kill
 * Made by Teetime
 */
#ifndef GAME_SERVER_GAMEMODES_SCTF_H
#define GAME_SERVER_GAMEMODES_SCTF_H
#include <game/server/gamecontroller.h>
#include "ctf.h"
#include "dm.h"
#include "tdm.h"


class CGameControllerSCTF : public CGameControllerCTF
{
public:
	CGameControllerSCTF(class CGameContext *pGameServer, int);
	virtual void OnCharacterSpawn(class CCharacter *pChr);
	virtual void Tick();
};

class CGameControllerSDM : public CGameControllerDM
{
public:
	CGameControllerSDM(class CGameContext *pGameServer, int);
	virtual void OnCharacterSpawn(class CCharacter *pChr);
	virtual void Tick();
};

class CGameControllerSTDM : public CGameControllerTDM
{
public:
	CGameControllerSTDM(class CGameContext *pGameServer, int);
	virtual void OnCharacterSpawn(class CCharacter *pChr);
	virtual void Tick();
};

#endif
