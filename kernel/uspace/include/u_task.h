/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef U_TASK_H
#define U_TASK_H

kstat_t krhino_utask_create(ktask_t **task, const name_t *name, void *arg,
                            uint8_t pri, tick_t ticks,cpu_stack_t *ustack_buf,
                            size_t ustack, size_t kstack, task_entry_t entry,
                            uint8_t autorun);

kstat_t krhino_utask_del(ktask_t *task);

kstat_t krhino_uprocess_create(ktask_t **task, const name_t *name, void *arg,
                               uint8_t pri, tick_t ticks, cpu_stack_t *ustack_buf,
                               size_t ustack, size_t kstack, task_entry_t entry,
                               uint32_t pid, uint8_t autorun);

kstat_t krhino_uprocess_exit(void);

void    krhino_uprocess_res_get(int32_t id, void **res);


#endif /* U_TASK_H */
