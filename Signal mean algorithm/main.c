#include <stdio.h>
#include <stdlib.h>


#define SIG_Length 320
extern InputSignal_f32_1kHz_15kHz[SIG_Length];
double calc_signal_mean(double *signal_array, int signal_length);
double MEAN;
int main()
{
    MEAN = calc_signal_mean(&InputSignal_f32_1kHz_15kHz[0], SIG_Length);
    printf("MEAN = %f \n\n", MEAN);
    return 0;
}

double calc_signal_mean(double *signal_array, int signal_length)
{
    double sum = 0.0;
    for (int i = 0; i < signal_length; i++)
    {
        sum += signal_array[i];
    }

    double _mean = sum / (double)signal_length;
    return _mean;
}
