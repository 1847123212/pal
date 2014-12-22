PAL: The Parallel Architectures Library
========================================

The Parallel Architectures Library (PAL) is a free and open-source libary written in C designed for minimalist processor architectures . The initial target for the libary is the Epiphany, but the library should be applicable to a wide range of chips and architectures. 

## Design criteria
* Fast  (..when data and program fits in local cache/SRAM)
* Open (permissive open source license)
* Dense (to fit as much as possible into 32KB of local memory)
* Scalable (should lend itself to vector and task parallelism)
* Portable (should be useful for different ISAs, with and without vector extensions, 32/64 bit)

To meet all of these goals, we had to adhere to the garbage in garbage out philosophy.
Examples of such tradeoffs include limiting the range, cutting out corner cases, and doing away with error checking.

## Components
``` c
* HAL     A universal hardware abstraction layer
* POSIX   POSIX functions needed for parallel programming
* IPC     Parallel programming constructs not found in POSIX
* MATH    Vectorized math library
* DSP     Vectorized DSP library
* FFT     Optimized FFT library
* GEMS    Classic programming tricks "gems"
```

##Licensing
PAL is licensed under the Apache License, Version 2.0. See LICENSE for full license text.

##Contributing
PAl is an ambitious project and really neeeds all the help it can get. If you have anything to contribute, please do!! Istructions for get started can be found [HERE](CONTRIBUTING.md). 

##Coding style 
* C99
* "K&R coding style, 4 spaces for tabs"

##API Style Example
``` c
/*Function: Vector addition
            y[n-1:0]=a[n-1:0]+b[n-1:0]

  Arguments: 
  
  n is the number of elements in the vector
  a is a pointer to an intput array of floats
  b is a pointer to an input array of floats
  y is a pointer to an output array of floats
 */
 
void p_add_32f( int n, float* a, float* b, float* y );

```

PAL Library Functions
========================================
## HAL -->FROM COPRTHR/ESDK (GENERIC local shared memory, address pointers)
* p_read()
* p_write()
* p_memcpy()
* p_memalloc()
* p_memfree()
* p_memptr()
* p_devctl()
* p_init()
* p_open()
* p_close()
* p_finalize()
* p_readelf()
* p_exec()
* p_freq()
* p_volt()
* p_halt()
* p_resume()
* p_timer_set()
* p_timer_get()
* p_timer_start()
* p_timer_stop()

## "POSIX-LITE"/IPC -->FROM COPRTRH (BUT GENERIC TO ALL PROCESSORS)
* p_attr_init()
* p_attr_destroy()
* p_attr_setdetachstate()
* p_attr_setdevice()
* p_attr_setinit()
* p_create()
* p_ncreate()
* p_join()
* p_mutex_attr_init()
* p_mutex_atr_destroy()
* p_mutex_attr_setdevice()
* p_mutex_init()
* p_mutex_destroy()
* p_mutex_lock()
* p_mutex_unlock()
* p_mutex_trylock()
* p_cond_attr_init()
* p_cond_attr_destroy()
* p_cond_attr_setdevice()
* p_cond_init()
* p_cond_destroy()
* p_wait()
* p_signal()
(more functions)
* p_atomic_add()
* p_atomic_sub()
* p_atomic_and()
* p_atimic_xor()
* p_atomic_or()
* p_atomic_nand()
* p_atomic_compare_exchange()
* p_memsync()
* p_barrier()

## MATH
* p_itof()
* p_ftoi()
* p_itod()
* p_dtoi()
* p_acos_32f()
* p_acosh_32f()
* p_asin_32f()
* p_atan_32f()
* p_atan2_32f()
* p_cbrt_32f()
* p_cos_32f()
* p_cosh_32f()
* p_exp_32f()
* p_icbrt_32f()
* p_ln_32f()
* p_log10_32f()
* p_pow_32f()
* p_sin_32f()
* p_sincos_32f()
* p_sin_32f()
* p_tan_32f()
* p_tanh_32f()
* p_sum_32f()
* p_ave_32f()
* p_mean_32f()
* p_maxval_32f()
* p_minval_32f()
* p_sop_32f()
* p_matmul_32f()
* p_matadd_32f()
* p_matacc_32f()
* p_mataccw_32f()
* p_matand_32f()
* p_matxor_32f()
* p_mator_32f()
* p_matmac_32f()
* p_mattran_32f()
* p_matdiv_32f()
* p_matsqrt_32f()
* p_matisqrt_32f()
* p_matinv_32f()
* p_matabsdiff_32f()
* p_matsqadd_32f()


## DSP
* p_acorr_32f()
* p_conf_32f()
* p_corr_32f()
* p_fir_32f()
* p_firdec_32f()
* p_firint_32f()
* p_firlat_32f()
* P_iir_32f()
* p_hist_32f()
* p_conv2D_32f()
* p_acorr2D_32f()
* p_ave2D_32f()
* p_median2D_32f()
* p_sobel2D_32f()
* p_box2D_32f()
* p_canny2D_32f()
* p_harris2D_32f()
* p_gauss2D_32f()
* p_sad2D_32f()
* p_mad2D_32f()
* p_hist2D_32f()
* p_mag2D_32f()
* p_histeq2D_32f()
* p_minmax2D_32f()
* p_thresh2D_32f()
* p_scale2D_32f()
* p_lut2D_32f()

## FFT
* p_fftplan_32f()
* p_fftexec_32f()
* p_fftdestroy()

## GEMS


