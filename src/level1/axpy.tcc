#ifndef ULMBLAS_SRC_LEVEL1_AXPY_TCC
#define ULMBLAS_SRC_LEVEL1_AXPY_TCC 1

#include <src/level1/axpy.h>

namespace ulmBLAS {

template <typename IndexType, typename Alpha, typename VX, typename VY>
void
axpy(IndexType      n,
     const Alpha    &alpha,
     const VX       *x,
     IndexType      incX,
     VY             *y,
     IndexType      incY)
{
    for (IndexType i=0; i<n; ++i) {
        y[i*incY] += alpha*x[i*incX];
    }
}

} // namespace ulmBLAS

#endif // ULMBLAS_SRC_LEVEL1_AXPY_TCC 1