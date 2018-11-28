/* sCTF - CTF with shotgun - 1Shot1Kill
 * Made by Teetime
 */
#include "shotgun.h"
#include <engine/shared/config.h>
#include <game/server/entities/character.h>
#include <game/server/gamecontext.h>

// sCTF

CGameControllerSCTF::CGameControllerSCTF(class CGameContext *pGameServer, int TypeFlags)
: CGameControllerCTF(pGameServer, TypeFlags)
{
	m_Flags = TypeFlags;
	m_pGameType = "sCTF+";
}

void CGameControllerSCTF::OnCharacterSpawn(CCharacter* pChr)
{
	pChr->IncreaseHealth(10);
	pChr->GiveWeapon(WEAPON_SHOTGUN, g_Config.m_SvShotgunAmmo);
}

void CGameControllerSCTF::Tick()
{
	CGameControllerCTF::Tick();
}


// sDM

CGameControllerSDM::CGameControllerSDM(class CGameContext *pGameServer, int TypeFlags)
: CGameControllerDM(pGameServer, TypeFlags)
{
	m_Flags = TypeFlags;
	m_pGameType = "sDM+";
}

void CGameControllerSDM::OnCharacterSpawn(CCharacter* pChr)
{
	pChr->IncreaseHealth(10);
	pChr->GiveWeapon(WEAPON_SHOTGUN, g_Config.m_SvShotgunAmmo);
}

void CGameControllerSDM::Tick()
{
	CGameControllerDM::Tick();
}


// sTDM

CGameControllerSTDM::CGameControllerSTDM(class CGameContext *pGameServer, int TypeFlags)
: CGameControllerTDM(pGameServer, TypeFlags)
{
	m_Flags = TypeFlags;
	m_pGameType = "sTDM+";
}

void CGameControllerSTDM::OnCharacterSpawn(CCharacter* pChr)
{
	pChr->IncreaseHealth(10);
	pChr->GiveWeapon(WEAPON_SHOTGUN, g_Config.m_SvShotgunAmmo);
}

void CGameControllerSTDM::Tick()
{
	CGameControllerTDM::Tick();
}
