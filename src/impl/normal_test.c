#include <stdio.h>
#include <stdint.h>

static const uint32_t backoff_ms[] = { 1000, 2000, 3000, 4000, 5000 };
// static uint32_t backoff_ms[] = { 1000, 2000, 3000, 4000, 5000 };

typedef struct lws_retry_bo
{
    const uint32_t *retry_ms_table;   /* base delay in ms */
    uint16_t retry_ms_table_count;    /* entries in table */
    uint16_t conceal_count;           /* max retries to conceal */
    uint16_t secs_since_valid_ping;   /* idle before PING issued */
    uint16_t secs_since_valid_hangup; /* idle before hangup conn */
    uint8_t jitter_percent;           /* % additional random jitter */
} lws_retry_bo_t;

/* 
static const lws_retry_bo_t retry = {
    retry_ms_table : backoff_ms,
    retry_ms_table_count : sizeof(backoff_ms) / sizeof(backoff_ms[0]),
    conceal_count : sizeof(backoff_ms) / sizeof(backoff_ms[0]),
    secs_since_valid_ping : 3,
    secs_since_valid_hangup : 10,
    jitter_percent : 20
};
 */

#define VALUE1 100

#define VALUE2

void normal_test()
{
#if (!defined (VALUE1)) && (!defined (VALUE2))
    // printf("index 0 val: %u\n", backoff_ms[0]);
    printf("define value\n");
#else 
    printf("undefine value\n");
#endif

    return;
}