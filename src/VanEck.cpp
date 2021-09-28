
#include "VanEck.hpp"

// Van Eck's _seq: For n >= 1,
// if there exists an m < n such that a(m) = a(n),
// take the largest such m and set a(n+1) = n-m;
// otherwise a(n+1) = 0. Start with a(1)=0.
VanEck::VanEck(int max)
    : _max(max)
{
  _seq = new int[_max];
  generateNth(0, _max);
}

VanEck::~VanEck()
{
  delete _seq;
}

int VanEck::get(int nth)
{
  return _seq[nth];
}

int VanEck::generateNth(int current, int n)
{
  // Initialize _seq array
  for (int i = 0; i < _max; i++)
  {
    _seq[i] = 0;
  }

  // Loop to generate _seq
  for (int i = 0; i < _max; i++)
  {
    // Check if _seq[i] has occured
    // previousely or is new to _seq
    for (int j = i - 1; j >= 0; j--)
    {
      if (_seq[j] == _seq[i])
      {
        // If occurrence found
        // then the next term will be
        // how far back this last term
        // occured previousely
        _seq[i + 1] = i - j;
        break;
      }
    }
  }
  return 0;
}
