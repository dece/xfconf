/*
 *  xfconf
 *
 *  Copyright (c) 2007 Brian Tarricone <bjt23@cornell.edu>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License ONLY.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "tests-common.h"

int
main(int argc,
     char **argv)
{
    XfconfChannel *channel;
    
    if(!xfconf_tests_start())
        return 1;
    
    channel = xfconf_channel_new(TEST_CHANNEL_NAME);
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_string_property));
    xfconf_channel_remove_property(channel, test_string_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_string_property));
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_strlist_property));
    xfconf_channel_remove_property(channel, test_strlist_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_strlist_property));
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_int_property));
    xfconf_channel_remove_property(channel, test_int_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_int_property));
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_uint64_property));
    xfconf_channel_remove_property(channel, test_uint64_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_uint64_property));
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_double_property));
    xfconf_channel_remove_property(channel, test_double_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_double_property));
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_bool_property));
    xfconf_channel_remove_property(channel, test_bool_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_bool_property));
    
    TEST_OPERATION(xfconf_channel_has_property(channel, test_array_property));
    xfconf_channel_remove_property(channel, test_array_property);
    TEST_OPERATION(!xfconf_channel_has_property(channel, test_array_property));
    
    g_object_unref(G_OBJECT(channel));
    
    xfconf_tests_end();
    
    return 0;
}
