#include "include/static.h"
using namespace shaiya;

void Static::DrawSystemMessage(int type, int lineNumber, int unknown)
{
    typedef void(__cdecl* LPFN)(int, int, int);
    (*(LPFN)0x423150)(type, lineNumber, unknown);
}

int Static::GetDaSkillEffectDataId(int skillId)
{
    typedef int(__cdecl* LPFN)(int);
    return (*(LPFN)0x5AB4E0)(skillId);
}
