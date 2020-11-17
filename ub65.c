/* Copyright 2019 marhalloweenvt
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ub65.h"

led_config_t g_led_config = { {
    { NO_LED, 9, 8, 7, NO_LED },
    { 6, NO_LED, NO_LED, NO_LED, 5 },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { 4, NO_LED, NO_LED, NO_LED, 3 },
    { NO_LED, 2, 1, 0, NO_LED }
}, {
    {  56,   0 }, { 112,   0 }, { 168,   0 },
    {   0,  16 },               { 224,  16 },

    {   0,   8 },               { 224,  48 },
    {  56,  64 }, { 112,  64 }, { 168,  64 }
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };

void suspend_power_down_kb(void)
{
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void)
{
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
