# Copyright (c) 2011, Oracle and/or its affiliates. All rights reserved.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

# Tests for the performance schema

# =====================================
# HELPER include/connection_cleanup.inc
# =====================================

--disable_query_log
revoke all privileges, grant option from user1@localhost;
revoke all privileges, grant option from user2@localhost;
revoke all privileges, grant option from user3@localhost;
revoke all privileges, grant option from user4@localhost;
revoke all privileges, grant option from user5@localhost;
drop user user1@localhost;
drop user user2@localhost;
drop user user3@localhost;
drop user user4@localhost;
drop user user5@localhost;
flush privileges;

drop procedure dump_all;

truncate table performance_schema.accounts;
truncate table performance_schema.users;
truncate table performance_schema.hosts;

--enable_query_log
