# LegendreGauss
C++ code to compute the Legendre-Gauss nodes and weights on [-1,1], based on NumPy's leggauss function

### Requirements
Eigen 3.3

### Usage
To compute the Legendre-Gauss nodes and weights of degree `n`:

```
#include "legendre.h"

Eigen::MatrixXd ret = leggauss(n);
```

The nodes and weights are contained in the first and second rows of `ret`, respectively.

