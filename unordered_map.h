#pragma once

#include <unordered_map>

template <typename Key, typename Value, typename Hash = std::hash<Key>,
          typename EqualTo = std::equal_to<Key>,
          typename Alloc = std::allocator<std::pair<const Key, Value>>>
using UnorderedMap = std::unordered_map<Key, Value, Hash, EqualTo, Alloc>;

// TODO: Solution above is smart enough, but please, remove it and add your declarations here
