#ifndef __GSTL_UNIVARIATE_STATS_UTILS_H__
#define __GSTL_UNIVARIATE_STATS_UTILS_H__

namespace GsTL {

/** This function computes the mean of a range of values
*/
template <class InputIterator>
double mean( InputIterator begin, InputIterator end ) {
  double res = 0.0;
  double count = 0.0;
  for( ; begin != end ; ++begin, count++ ) 
    res += *begin;

  return res / count ;
}


/** This function computes the variance of a range of values.
* If pointer \c mean is not null, the mean of the range is stored
* in *mean.
*/
template <class InputIterator, class T>
double variance( InputIterator begin, InputIterator end, T* mean = 0 ) {
  double res = 0;
  double mean_ = 0;
  double count = 0;
  for( ; begin != end ; ++begin, count++ ) {
    res += (*begin) * (*begin);
    mean_ += *begin;
  }

  mean_ /= count;
  if ( mean ) *mean = static_cast<T>(mean_);
  return res / ( count - 1 ) - count/(count-1)*mean_*mean_;
}


} // end of GsTL namespace

#endif
