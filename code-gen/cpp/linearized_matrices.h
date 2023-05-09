// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <lcmtypes/sym/params_t.hpp>

namespace sym {

/**
 * This function was autogenerated. Do not modify by hand.
 *
 * Args:
 *     state: Matrix21
 *     u: Matrix11
 *
 * Outputs:
 *     params: Values
 */
template <typename Scalar>
sym::params_t LinearizedMatrices(const Eigen::Matrix<Scalar, 2, 1>& state,
                                 const Eigen::Matrix<Scalar, 1, 1>& u) {
  // Total ops: 0

  // Unused inputs
  (void)state;
  (void)u;

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  sym::params_t _params;

  _params.A.data()[0] = 0;
  _params.A.data()[1] = 0;
  _params.A.data()[2] = 1;
  _params.A.data()[3] = 0;
  _params.B.data()[0] = 0;
  _params.B.data()[1] = 1;

  return _params;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
