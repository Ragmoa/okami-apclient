#pragma once

#include <span>

#include "registry.hpp"

namespace eventfix::moon_cave
{

// Bypass records for Moon Cave forced-tutorial softlock. See
// docs/event-triggers-runtime.md for the runtime model and chain.
std::span<const EventBypass> getBypasses();

} // namespace eventfix::moon_cave
