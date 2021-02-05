/**
 * https://github.com/google/benchmark
 */
#include "benchmark/benchmark.h"

#include <chrono>
#include <string>

void SomeFunction(size_t size) {
  std::string s1(size, '-');
  std::string s2(size, '-');
  benchmark::DoNotOptimize(s1.compare(s2));
}

static void BM_SomeFunction(benchmark::State& state) {
  for (auto _ : state) {
    SomeFunction(state.range(0));
  }
}

BENCHMARK(BM_SomeFunction)->RangeMultiplier(2)->Range(1 << 10, 1 << 20);


BENCHMARK_MAIN();