/* ide-test-manager.h
 *
 * Copyright 2017-2019 Christian Hergert <chergert@redhat.com>
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
 */

#pragma once

#include "ide-object.h"
#include "ide-version-macros.h"

G_BEGIN_DECLS

#define IDE_TYPE_TEST_MANAGER (ide_test_manager_get_type())

IDE_AVAILABLE_IN_3_32
G_DECLARE_FINAL_TYPE (IdeTestManager, ide_test_manager, IDE, TEST_MANAGER, IdeObject)

IDE_AVAILABLE_IN_3_32
gboolean ide_test_manager_get_loading    (IdeTestManager       *self);
IDE_AVAILABLE_IN_3_32
void     ide_test_manager_run_async      (IdeTestManager       *self,
                                          IdeTest              *test,
                                          GCancellable         *cancellable,
                                          GAsyncReadyCallback   callback,
                                          gpointer              user_data);
IDE_AVAILABLE_IN_3_32
gboolean ide_test_manager_run_finish     (IdeTestManager       *self,
                                          GAsyncResult         *result,
                                          GError              **error);
IDE_AVAILABLE_IN_3_32
void     ide_test_manager_run_all_async  (IdeTestManager       *self,
                                          GCancellable         *cancellable,
                                          GAsyncReadyCallback   callback,
                                          gpointer              user_data);
IDE_AVAILABLE_IN_3_32
gboolean ide_test_manager_run_all_finish (IdeTestManager       *self,
                                          GAsyncResult         *result,
                                          GError              **error);

G_END_DECLS
