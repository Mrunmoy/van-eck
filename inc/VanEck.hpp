#pragma once
#include <iostream>
#include <string>
#include <set>
#include <vector>

struct Node
{
  int value;
  int maxIndexSoFar;
};

class VanEck
{
public:
  VanEck(int max);
  ~VanEck();
  int get(int nth);

protected:
  int generateNth(int current, int n);

private:
  const int _max;
  int *_seq;
};
