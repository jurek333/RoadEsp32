#pragma once

template<typename T>
static bool AreEqual(T f1, T f2) { 
  return (std::fabs(f1 - f2) <= std::numeric_limits<T>::epsilon() * std::fmax(std::fabs(f1), std::fabs(f2)));
}