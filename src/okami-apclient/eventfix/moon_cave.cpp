#include "moon_cave.hpp"

#include <okami/brushes.hpp>
#include <wolf_framework.hpp>

#include "common.hpp"

namespace eventfix::moon_cave
{

namespace
{

// FUN_1805203c0: 
void __fastcall stubInfernoTutorial()
{
    eventfix::clearCutsceneModeBits();
    eventfix::grantBrush(okami::BrushOverlay::inferno);
    wolf::logInfo("[eventfix] Inferno sequence bypassed, brush granted");
}

// FUN_18051fb50: 
void __fastcall stubInfernoTutorial2()
{
    eventfix::clearCutsceneModeBits();
    wolf::logInfo("[eventfix] Inferno sequence bypassed");
}

constexpr EventBypass kBypasses[] = {
    {"CoN entrance cutscene", 0x51fe30, stubInfernoTutorial2},
};

} // namespace

std::span<const EventBypass> getBypasses()
{
    return kBypasses;
}

} // namespace eventfix::moon_cave
