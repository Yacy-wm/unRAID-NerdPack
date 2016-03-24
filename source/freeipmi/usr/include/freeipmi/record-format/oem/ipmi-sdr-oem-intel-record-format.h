/*
 * Copyright (C) 2003-2015 FreeIPMI Core Team
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef IPMI_SDR_OEM_INTEL_RECORD_FORMAT_H
#define IPMI_SDR_OEM_INTEL_RECORD_FORMAT_H

#ifdef __cplusplus
extern "C" {
#endif

/* 
 * see freeipmi/templates/ for template definitions 
 */

/*
 * Quanta QSSC-S4R/Appro GB812X-CN
 * (Quanta motherboard contains Intel manufacturer ID)
 */

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_OEM_DATA_LENGTH 11

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_SUBTYPE_INDEX 0

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_SUBTYPE 0x0B

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_MEMORY_THROTTLING_MODE_INDEX   1
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_MEMORY_THROTTLING_MODE_BITMASK 0x03
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_MEMORY_THROTTLING_MODE_SHIFT   0

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_MEMORY_THROTTLING_MODE_NONE_SUPPORTED                  0 
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_MEMORY_THROTTLING_MODE_OPEN_LOOP_THROUGHPUT_THROTTLING 1 
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_MEMORY_THROTTLING_MODE_CLOSE_LOOP_THERMAL_THROTTLING   2

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE_INDEX 2

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE0_BITMASK 0x01
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE0_SHIFT   0

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE1_BITMASK 0x02
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE1_SHIFT   1

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE2_BITMASK 0x04
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE2_SHIFT   2

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE3_BITMASK 0x08
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE3_SHIFT   3

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE4_BITMASK 0x10
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE4_SHIFT   4

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE5_BITMASK 0x20
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE5_SHIFT   5

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE6_BITMASK 0x40
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE6_SHIFT   6

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE7_BITMASK 0x80
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE7_SHIFT   7

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE_VALID   1
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_FAN_PROFILE_INVALID 0

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_TEMPINLET_INDEX 3

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_TEMPRISE_INDEX 4

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_AIRFLOW_INDEX_START 5
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_AIRFLOW_INDEX_END   6

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_DIMMPITCH_INDEX_START 7
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_DIMMPITCH_INDEX_END   8

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_INDEX   9
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_BITMASK 0x03
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_SHIFT   0

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_DISABLED      0
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_VTS_ONLY      1
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_SOFTWARE_MODE 2
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THROTTLE_MODE_EXTTS_CLTT    3

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THERMAL_REGISTER_LOCK_INDEX   10
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THERMAL_REGISTER_LOCK_BITMASK 0x01
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_THERMAL_REGISTER_LOCK_SHIFT   0

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_INDEX   10
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_BITMASK 0x06
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_SHIFT   1

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_DISABLE 0
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_1_5C    1
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_3C      2
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_HYSTERESIS_6C      3

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_CONTROL_EVENT_MODE_INDEX   10
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_CONTROL_EVENT_MODE_BITMASK 0x04
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_CONTROL_EVENT_MODE_SHIFT   3

#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_CONTROL_EVENT_MODE_ASSERT_NOT_ONLY_CRITICAL 0
#define IPMI_SDR_OEM_INTEL_QUANTA_QSSC_S4R_THERMAL_PROFILE_DATA_RECORD_CONTROL_EVENT_MODE_ASSERT_ONLY_CRITICAL     1

#ifdef __cplusplus
}
#endif

#endif /* IPMI_SDR_OEM_INTEL_RECORD_FORMAT_H */
