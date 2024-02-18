#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Map a value from one range to another linearly.
 * @param x The value to map.
 * @param in_min The minimum value of the input range.
 * @param in_max The maximum value of the input range.
 * @param out_min The minimum value of the output range.
 * @param out_max The maximum value of the output range.
 * @return The mapped value.
 */
long map(long x, long in_min, long in_max, long out_min, long out_max) {
    // Calculate the mapped value using linear interpolation formula
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

#endif /* UTILS_H */

/*** end of file ***/