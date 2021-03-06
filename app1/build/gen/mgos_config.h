/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/1.20.1/apps/app1/esp32/build_contexts/build_ctx_091328836/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sntp_config.yaml /mongoose-os/fw/src/mgos_updater_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /fwbuild-volumes/1.20.1/apps/app1/esp32/build_contexts/build_ctx_091328836/build/gen/mos_conf_schema.yml
 */

#ifndef MGOS_CONFIG_H_
#define MGOS_CONFIG_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_config_sntp {
  int enable;
  char *server;
  int retry_min;
  int retry_max;
  int update_interval;
};

struct mgos_config_update {
  int timeout;
  int commit_timeout;
  char *url;
  int interval;
  char *ssl_ca_file;
  char *ssl_client_cert_file;
  char *ssl_server_name;
  int enable_post;
};

struct mgos_config_device {
  char *id;
  char *password;
};

struct mgos_config_debug {
  char *udp_log_addr;
  int mbedtls_level;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  char *stdout_topic;
  char *stderr_topic;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  int wdt_timeout;
  char *tz_spec;
  int esp32_adc_vref;
  struct mgos_config_sys_atca atca;
};

struct mgos_config_i2c {
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_mqtt {
  int enable;
  char *server;
  char *client_id;
  char *user;
  char *pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *ssl_cipher_suites;
  char *ssl_psk_identity;
  char *ssl_psk_key;
  int clean_session;
  int keep_alive;
  char *will_topic;
  char *will_message;
  int max_qos;
};

struct mgos_config_aws_greengrass {
  int enable;
  int reconnect_timeout_min;
  int reconnect_timeout_max;
};

struct mgos_config_aws {
  char *thing_name;
  struct mgos_config_aws_greengrass greengrass;
};

struct mgos_config_bt {
  int enable;
  char *dev_name;
  int adv_enable;
  int keep_enabled;
  int config_svc_enable;
  int debug_svc_enable;
};

struct mgos_config_eth {
  int enable;
  int phy_addr;
  int mdc_gpio;
  int mdio_gpio;
};

struct mgos_config_wifi_sta {
  int enable;
  char *ssid;
  char *pass;
  char *user;
  char *anon_identity;
  char *cert;
  char *key;
  char *ca_cert;
  char *ip;
  char *netmask;
  char *gw;
  char *nameserver;
  char *dhcp_hostname;
};

struct mgos_config_wifi_ap {
  int enable;
  char *ssid;
  char *pass;
  int hidden;
  int channel;
  int max_connections;
  char *ip;
  char *netmask;
  char *gw;
  char *dhcp_start;
  char *dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  int keep_enabled;
};

struct mgos_config_wifi {
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_ap ap;
};

struct mgos_config_http {
  int enable;
  char *listen_addr;
  char *document_root;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *upload_acl;
  char *hidden_files;
  char *auth_domain;
  char *auth_file;
};

struct mgos_config_rpc_ws {
  int enable;
  char *server_address;
  int reconnect_interval_min;
  int reconnect_interval_max;
  char *ssl_server_name;
  char *ssl_ca_file;
  char *ssl_client_cert_file;
};

struct mgos_config_rpc_gatts {
  int enable;
  int is_trusted;
};

struct mgos_config_rpc_mqtt {
  int enable;
  char *topic;
  int is_trusted;
};

struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  int wait_for_start_frame;
};

struct mgos_config_rpc {
  int enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  char *acl_file;
  char *auth_domain;
  char *auth_file;
  struct mgos_config_rpc_ws ws;
  struct mgos_config_rpc_gatts gatts;
  struct mgos_config_rpc_mqtt mqtt;
  struct mgos_config_rpc_uart uart;
};

struct mgos_config_dash {
  int enable;
  char *token;
  char *server;
  char *ca_file;
  int heartbeat_interval;
  int send_logs;
};

struct mgos_config_dns_sd {
  int enable;
  char *host_name;
  char *txt;
  int ttl;
};

struct mgos_config_gcp {
  int enable;
  char *project;
  char *region;
  char *registry;
  char *device;
  char *key;
  int token_ttl;
};

struct mgos_config_mjs {
  int generate_jsc;
};

struct mgos_config_pppos {
  int enable;
  int uart_no;
  int baud_rate;
  int fc_enable;
  char *apn;
  char *user;
  char *pass;
  char *connect_cmd;
  int echo_interval;
  int echo_fails;
  int hexdump_enable;
};

struct mgos_config_spi {
  int enable;
  int debug;
  int unit_no;
  int miso_gpio;
  int mosi_gpio;
  int sclk_gpio;
  int cs0_gpio;
  int cs1_gpio;
  int cs2_gpio;
};

struct mgos_config {
  struct mgos_config_sntp sntp;
  struct mgos_config_update update;
  struct mgos_config_device device;
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_i2c i2c;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_aws aws;
  struct mgos_config_bt bt;
  struct mgos_config_eth eth;
  struct mgos_config_wifi wifi;
  struct mgos_config_http http;
  struct mgos_config_rpc rpc;
  struct mgos_config_dash dash;
  struct mgos_config_dns_sd dns_sd;
  struct mgos_config_gcp gcp;
  struct mgos_config_mjs mjs;
  struct mgos_config_pppos pppos;
  struct mgos_config_spi spi;
};

/* Parametrized accessor prototypes {{{ */
const struct mgos_config_sntp *mgos_config_get_sntp(struct mgos_config *cfg);
int         mgos_config_get_sntp_enable(struct mgos_config *cfg);
const char *mgos_config_get_sntp_server(struct mgos_config *cfg);
int         mgos_config_get_sntp_retry_min(struct mgos_config *cfg);
int         mgos_config_get_sntp_retry_max(struct mgos_config *cfg);
int         mgos_config_get_sntp_update_interval(struct mgos_config *cfg);
const struct mgos_config_update *mgos_config_get_update(struct mgos_config *cfg);
int         mgos_config_get_update_timeout(struct mgos_config *cfg);
int         mgos_config_get_update_commit_timeout(struct mgos_config *cfg);
const char *mgos_config_get_update_url(struct mgos_config *cfg);
int         mgos_config_get_update_interval(struct mgos_config *cfg);
const char *mgos_config_get_update_ssl_ca_file(struct mgos_config *cfg);
const char *mgos_config_get_update_ssl_client_cert_file(struct mgos_config *cfg);
const char *mgos_config_get_update_ssl_server_name(struct mgos_config *cfg);
int         mgos_config_get_update_enable_post(struct mgos_config *cfg);
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
const char *mgos_config_get_device_id(struct mgos_config *cfg);
const char *mgos_config_get_device_password(struct mgos_config *cfg);
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
int         mgos_config_get_debug_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg);
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg);
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
int         mgos_config_get_sys_esp32_adc_vref(struct mgos_config *cfg);
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg);
int         mgos_config_get_i2c_enable(struct mgos_config *cfg);
int         mgos_config_get_i2c_freq(struct mgos_config *cfg);
int         mgos_config_get_i2c_debug(struct mgos_config *cfg);
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg);
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg);
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg);
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg);
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg);
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg);
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg);
const struct mgos_config_aws *mgos_config_get_aws(struct mgos_config *cfg);
const char *mgos_config_get_aws_thing_name(struct mgos_config *cfg);
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg);
const struct mgos_config_bt *mgos_config_get_bt(struct mgos_config *cfg);
int         mgos_config_get_bt_enable(struct mgos_config *cfg);
const char *mgos_config_get_bt_dev_name(struct mgos_config *cfg);
int         mgos_config_get_bt_adv_enable(struct mgos_config *cfg);
int         mgos_config_get_bt_keep_enabled(struct mgos_config *cfg);
int         mgos_config_get_bt_config_svc_enable(struct mgos_config *cfg);
int         mgos_config_get_bt_debug_svc_enable(struct mgos_config *cfg);
const struct mgos_config_eth *mgos_config_get_eth(struct mgos_config *cfg);
int         mgos_config_get_eth_enable(struct mgos_config *cfg);
int         mgos_config_get_eth_phy_addr(struct mgos_config *cfg);
int         mgos_config_get_eth_mdc_gpio(struct mgos_config *cfg);
int         mgos_config_get_eth_mdio_gpio(struct mgos_config *cfg);
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg);
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg);
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg);
const struct mgos_config_http *mgos_config_get_http(struct mgos_config *cfg);
int         mgos_config_get_http_enable(struct mgos_config *cfg);
const char *mgos_config_get_http_listen_addr(struct mgos_config *cfg);
const char *mgos_config_get_http_document_root(struct mgos_config *cfg);
const char *mgos_config_get_http_ssl_cert(struct mgos_config *cfg);
const char *mgos_config_get_http_ssl_key(struct mgos_config *cfg);
const char *mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_http_upload_acl(struct mgos_config *cfg);
const char *mgos_config_get_http_hidden_files(struct mgos_config *cfg);
const char *mgos_config_get_http_auth_domain(struct mgos_config *cfg);
const char *mgos_config_get_http_auth_file(struct mgos_config *cfg);
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg);
int         mgos_config_get_rpc_enable(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg);
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg);
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg);
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg);
const struct mgos_config_rpc_gatts *mgos_config_get_rpc_gatts(struct mgos_config *cfg);
int         mgos_config_get_rpc_gatts_enable(struct mgos_config *cfg);
int         mgos_config_get_rpc_gatts_is_trusted(struct mgos_config *cfg);
const struct mgos_config_rpc_mqtt *mgos_config_get_rpc_mqtt(struct mgos_config *cfg);
int         mgos_config_get_rpc_mqtt_enable(struct mgos_config *cfg);
const char *mgos_config_get_rpc_mqtt_topic(struct mgos_config *cfg);
int         mgos_config_get_rpc_mqtt_is_trusted(struct mgos_config *cfg);
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_wait_for_start_frame(struct mgos_config *cfg);
const struct mgos_config_dash *mgos_config_get_dash(struct mgos_config *cfg);
int         mgos_config_get_dash_enable(struct mgos_config *cfg);
const char *mgos_config_get_dash_token(struct mgos_config *cfg);
const char *mgos_config_get_dash_server(struct mgos_config *cfg);
const char *mgos_config_get_dash_ca_file(struct mgos_config *cfg);
int         mgos_config_get_dash_heartbeat_interval(struct mgos_config *cfg);
int         mgos_config_get_dash_send_logs(struct mgos_config *cfg);
const struct mgos_config_dns_sd *mgos_config_get_dns_sd(struct mgos_config *cfg);
int         mgos_config_get_dns_sd_enable(struct mgos_config *cfg);
const char *mgos_config_get_dns_sd_host_name(struct mgos_config *cfg);
const char *mgos_config_get_dns_sd_txt(struct mgos_config *cfg);
int         mgos_config_get_dns_sd_ttl(struct mgos_config *cfg);
const struct mgos_config_gcp *mgos_config_get_gcp(struct mgos_config *cfg);
int         mgos_config_get_gcp_enable(struct mgos_config *cfg);
const char *mgos_config_get_gcp_project(struct mgos_config *cfg);
const char *mgos_config_get_gcp_region(struct mgos_config *cfg);
const char *mgos_config_get_gcp_registry(struct mgos_config *cfg);
const char *mgos_config_get_gcp_device(struct mgos_config *cfg);
const char *mgos_config_get_gcp_key(struct mgos_config *cfg);
int         mgos_config_get_gcp_token_ttl(struct mgos_config *cfg);
const struct mgos_config_mjs *mgos_config_get_mjs(struct mgos_config *cfg);
int         mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg);
const struct mgos_config_pppos *mgos_config_get_pppos(struct mgos_config *cfg);
int         mgos_config_get_pppos_enable(struct mgos_config *cfg);
int         mgos_config_get_pppos_uart_no(struct mgos_config *cfg);
int         mgos_config_get_pppos_baud_rate(struct mgos_config *cfg);
int         mgos_config_get_pppos_fc_enable(struct mgos_config *cfg);
const char *mgos_config_get_pppos_apn(struct mgos_config *cfg);
const char *mgos_config_get_pppos_user(struct mgos_config *cfg);
const char *mgos_config_get_pppos_pass(struct mgos_config *cfg);
const char *mgos_config_get_pppos_connect_cmd(struct mgos_config *cfg);
int         mgos_config_get_pppos_echo_interval(struct mgos_config *cfg);
int         mgos_config_get_pppos_echo_fails(struct mgos_config *cfg);
int         mgos_config_get_pppos_hexdump_enable(struct mgos_config *cfg);
const struct mgos_config_spi *mgos_config_get_spi(struct mgos_config *cfg);
int         mgos_config_get_spi_enable(struct mgos_config *cfg);
int         mgos_config_get_spi_debug(struct mgos_config *cfg);
int         mgos_config_get_spi_unit_no(struct mgos_config *cfg);
int         mgos_config_get_spi_miso_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_mosi_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_sclk_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs0_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs1_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs2_gpio(struct mgos_config *cfg);

void mgos_config_set_sntp_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_update_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_update_url(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_enable_post(struct mgos_config *cfg, int         val);
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_config_svc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_debug_svc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_eth_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_eth_phy_addr(struct mgos_config *cfg, int         val);
void mgos_config_set_eth_mdc_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_eth_mdio_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_http_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_gatts_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_gatts_is_trusted(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_mqtt_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_mqtt_is_trusted(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_wait_for_start_frame(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_token(struct mgos_config *cfg, const char *val);
void mgos_config_set_dash_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_dash_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_dash_heartbeat_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_send_logs(struct mgos_config *cfg, int         val);
void mgos_config_set_dns_sd_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_dns_sd_host_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_dns_sd_txt(struct mgos_config *cfg, const char *val);
void mgos_config_set_dns_sd_ttl(struct mgos_config *cfg, int         val);
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int         val);
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_uart_no(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_baud_rate(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_fc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_apn(struct mgos_config *cfg, const char *val);
void mgos_config_set_pppos_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_pppos_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_pppos_connect_cmd(struct mgos_config *cfg, const char *val);
void mgos_config_set_pppos_echo_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_echo_fails(struct mgos_config *cfg, int         val);
void mgos_config_set_pppos_hexdump_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_unit_no(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline const struct mgos_config_sntp *mgos_sys_config_get_sntp(void) { return mgos_config_get_sntp(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_enable(void) { return mgos_config_get_sntp_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sntp_server(void) { return mgos_config_get_sntp_server(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_retry_min(void) { return mgos_config_get_sntp_retry_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_retry_max(void) { return mgos_config_get_sntp_retry_max(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_update_interval(void) { return mgos_config_get_sntp_update_interval(&mgos_sys_config); }
static inline const struct mgos_config_update *mgos_sys_config_get_update(void) { return mgos_config_get_update(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_timeout(void) { return mgos_config_get_update_timeout(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_commit_timeout(void) { return mgos_config_get_update_commit_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_url(void) { return mgos_config_get_update_url(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_interval(void) { return mgos_config_get_update_interval(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_ssl_ca_file(void) { return mgos_config_get_update_ssl_ca_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_ssl_client_cert_file(void) { return mgos_config_get_update_ssl_client_cert_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_ssl_server_name(void) { return mgos_config_get_update_ssl_server_name(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_enable_post(void) { return mgos_config_get_update_enable_post(&mgos_sys_config); }
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_password(void) { return mgos_config_get_device_password(&mgos_sys_config); }
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_esp32_adc_vref(void) { return mgos_config_get_sys_esp32_adc_vref(&mgos_sys_config); }
static inline const struct mgos_config_sys_atca *mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
static inline const struct mgos_config_aws *mgos_sys_config_get_aws(void) { return mgos_config_get_aws(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_aws_thing_name(void) { return mgos_config_get_aws_thing_name(&mgos_sys_config); }
static inline const struct mgos_config_aws_greengrass *mgos_sys_config_get_aws_greengrass(void) { return mgos_config_get_aws_greengrass(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_enable(void) { return mgos_config_get_aws_greengrass_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_min(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_max(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_max(&mgos_sys_config); }
static inline const struct mgos_config_bt *mgos_sys_config_get_bt(void) { return mgos_config_get_bt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_enable(void) { return mgos_config_get_bt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_bt_dev_name(void) { return mgos_config_get_bt_dev_name(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_adv_enable(void) { return mgos_config_get_bt_adv_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_keep_enabled(void) { return mgos_config_get_bt_keep_enabled(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_config_svc_enable(void) { return mgos_config_get_bt_config_svc_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_bt_debug_svc_enable(void) { return mgos_config_get_bt_debug_svc_enable(&mgos_sys_config); }
static inline const struct mgos_config_eth *mgos_sys_config_get_eth(void) { return mgos_config_get_eth(&mgos_sys_config); }
static inline int         mgos_sys_config_get_eth_enable(void) { return mgos_config_get_eth_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_eth_phy_addr(void) { return mgos_config_get_eth_phy_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_eth_mdc_gpio(void) { return mgos_config_get_eth_mdc_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_eth_mdio_gpio(void) { return mgos_config_get_eth_mdio_gpio(&mgos_sys_config); }
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
static inline const struct mgos_config_http *mgos_sys_config_get_http(void) { return mgos_config_get_http(&mgos_sys_config); }
static inline int         mgos_sys_config_get_http_enable(void) { return mgos_config_get_http_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_listen_addr(void) { return mgos_config_get_http_listen_addr(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_document_root(void) { return mgos_config_get_http_document_root(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_ssl_cert(void) { return mgos_config_get_http_ssl_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_ssl_key(void) { return mgos_config_get_http_ssl_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_ssl_ca_cert(void) { return mgos_config_get_http_ssl_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_upload_acl(void) { return mgos_config_get_http_upload_acl(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_hidden_files(void) { return mgos_config_get_http_hidden_files(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_auth_domain(void) { return mgos_config_get_http_auth_domain(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_auth_file(void) { return mgos_config_get_http_auth_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_ws *mgos_sys_config_get_rpc_ws(void) { return mgos_config_get_rpc_ws(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_enable(void) { return mgos_config_get_rpc_ws_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_server_address(void) { return mgos_config_get_rpc_ws_server_address(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_rpc_ws_reconnect_interval_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_rpc_ws_reconnect_interval_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_server_name(void) { return mgos_config_get_rpc_ws_ssl_server_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_ca_file(void) { return mgos_config_get_rpc_ws_ssl_ca_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_client_cert_file(void) { return mgos_config_get_rpc_ws_ssl_client_cert_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_gatts *mgos_sys_config_get_rpc_gatts(void) { return mgos_config_get_rpc_gatts(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_gatts_enable(void) { return mgos_config_get_rpc_gatts_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_gatts_is_trusted(void) { return mgos_config_get_rpc_gatts_is_trusted(&mgos_sys_config); }
static inline const struct mgos_config_rpc_mqtt *mgos_sys_config_get_rpc_mqtt(void) { return mgos_config_get_rpc_mqtt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_mqtt_enable(void) { return mgos_config_get_rpc_mqtt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_mqtt_topic(void) { return mgos_config_get_rpc_mqtt_topic(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_mqtt_is_trusted(void) { return mgos_config_get_rpc_mqtt_is_trusted(&mgos_sys_config); }
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_wait_for_start_frame(void) { return mgos_config_get_rpc_uart_wait_for_start_frame(&mgos_sys_config); }
static inline const struct mgos_config_dash *mgos_sys_config_get_dash(void) { return mgos_config_get_dash(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_enable(void) { return mgos_config_get_dash_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dash_token(void) { return mgos_config_get_dash_token(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dash_server(void) { return mgos_config_get_dash_server(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dash_ca_file(void) { return mgos_config_get_dash_ca_file(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_heartbeat_interval(void) { return mgos_config_get_dash_heartbeat_interval(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_send_logs(void) { return mgos_config_get_dash_send_logs(&mgos_sys_config); }
static inline const struct mgos_config_dns_sd *mgos_sys_config_get_dns_sd(void) { return mgos_config_get_dns_sd(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dns_sd_enable(void) { return mgos_config_get_dns_sd_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dns_sd_host_name(void) { return mgos_config_get_dns_sd_host_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dns_sd_txt(void) { return mgos_config_get_dns_sd_txt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dns_sd_ttl(void) { return mgos_config_get_dns_sd_ttl(&mgos_sys_config); }
static inline const struct mgos_config_gcp *mgos_sys_config_get_gcp(void) { return mgos_config_get_gcp(&mgos_sys_config); }
static inline int         mgos_sys_config_get_gcp_enable(void) { return mgos_config_get_gcp_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_project(void) { return mgos_config_get_gcp_project(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_region(void) { return mgos_config_get_gcp_region(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_registry(void) { return mgos_config_get_gcp_registry(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_device(void) { return mgos_config_get_gcp_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_key(void) { return mgos_config_get_gcp_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_gcp_token_ttl(void) { return mgos_config_get_gcp_token_ttl(&mgos_sys_config); }
static inline const struct mgos_config_mjs *mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }
static inline const struct mgos_config_pppos *mgos_sys_config_get_pppos(void) { return mgos_config_get_pppos(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_enable(void) { return mgos_config_get_pppos_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_uart_no(void) { return mgos_config_get_pppos_uart_no(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_baud_rate(void) { return mgos_config_get_pppos_baud_rate(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_fc_enable(void) { return mgos_config_get_pppos_fc_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_pppos_apn(void) { return mgos_config_get_pppos_apn(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_pppos_user(void) { return mgos_config_get_pppos_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_pppos_pass(void) { return mgos_config_get_pppos_pass(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_pppos_connect_cmd(void) { return mgos_config_get_pppos_connect_cmd(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_echo_interval(void) { return mgos_config_get_pppos_echo_interval(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_echo_fails(void) { return mgos_config_get_pppos_echo_fails(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pppos_hexdump_enable(void) { return mgos_config_get_pppos_hexdump_enable(&mgos_sys_config); }
static inline const struct mgos_config_spi *mgos_sys_config_get_spi(void) { return mgos_config_get_spi(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_enable(void) { return mgos_config_get_spi_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_debug(void) { return mgos_config_get_spi_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_unit_no(void) { return mgos_config_get_spi_unit_no(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_miso_gpio(void) { return mgos_config_get_spi_miso_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_mosi_gpio(void) { return mgos_config_get_spi_mosi_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_sclk_gpio(void) { return mgos_config_get_spi_sclk_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs0_gpio(void) { return mgos_config_get_spi_cs0_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs1_gpio(void) { return mgos_config_get_spi_cs1_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs2_gpio(void) { return mgos_config_get_spi_cs2_gpio(&mgos_sys_config); }

static inline void mgos_sys_config_set_sntp_enable(int         val) { mgos_config_set_sntp_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_server(const char *val) { mgos_config_set_sntp_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_retry_min(int         val) { mgos_config_set_sntp_retry_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_retry_max(int         val) { mgos_config_set_sntp_retry_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_update_interval(int         val) { mgos_config_set_sntp_update_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_timeout(int         val) { mgos_config_set_update_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_commit_timeout(int         val) { mgos_config_set_update_commit_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_url(const char *val) { mgos_config_set_update_url(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_interval(int         val) { mgos_config_set_update_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_ssl_ca_file(const char *val) { mgos_config_set_update_ssl_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_ssl_client_cert_file(const char *val) { mgos_config_set_update_ssl_client_cert_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_ssl_server_name(const char *val) { mgos_config_set_update_ssl_server_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_enable_post(int         val) { mgos_config_set_update_enable_post(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_password(const char *val) { mgos_config_set_device_password(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_topic(const char *val) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_topic(const char *val) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_esp32_adc_vref(int         val) { mgos_config_set_sys_esp32_adc_vref(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_enable(int         val) { mgos_config_set_sys_atca_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int         val) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int         val) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_enable(int         val) { mgos_config_set_i2c_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_freq(int         val) { mgos_config_set_i2c_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_debug(int         val) { mgos_config_set_i2c_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_sda_gpio(int         val) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_scl_gpio(int         val) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_enable(int         val) { mgos_config_set_mqtt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_server(const char *val) { mgos_config_set_mqtt_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_client_id(const char *val) { mgos_config_set_mqtt_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_user(const char *val) { mgos_config_set_mqtt_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_pass(const char *val) { mgos_config_set_mqtt_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double      val) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double      val) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char *val) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_key(const char *val) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char *val) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char *val) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char *val) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char *val) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_clean_session(int         val) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_keep_alive(int         val) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_topic(const char *val) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_message(const char *val) { mgos_config_set_mqtt_will_message(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_max_qos(int         val) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_thing_name(const char *val) { mgos_config_set_aws_thing_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_enable(int         val) { mgos_config_set_aws_greengrass_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_min(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_max(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_enable(int         val) { mgos_config_set_bt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_dev_name(const char *val) { mgos_config_set_bt_dev_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_adv_enable(int         val) { mgos_config_set_bt_adv_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_keep_enabled(int         val) { mgos_config_set_bt_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_config_svc_enable(int         val) { mgos_config_set_bt_config_svc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_debug_svc_enable(int         val) { mgos_config_set_bt_debug_svc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_eth_enable(int         val) { mgos_config_set_eth_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_eth_phy_addr(int         val) { mgos_config_set_eth_phy_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_eth_mdc_gpio(int         val) { mgos_config_set_eth_mdc_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_eth_mdio_gpio(int         val) { mgos_config_set_eth_mdio_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_enable(int         val) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ssid(const char *val) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_pass(const char *val) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_user(const char *val) { mgos_config_set_wifi_sta_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char *val) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_cert(const char *val) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_key(const char *val) { mgos_config_set_wifi_sta_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char *val) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ip(const char *val) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_netmask(const char *val) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_gw(const char *val) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char *val) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_enable(int         val) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ssid(const char *val) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_pass(const char *val) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hidden(int         val) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_channel(int         val) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_max_connections(int         val) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ip(const char *val) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_netmask(const char *val) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_gw(const char *val) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char *val) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char *val) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int         val) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_disable_after(int         val) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int         val) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_enable(int         val) { mgos_config_set_http_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_listen_addr(const char *val) { mgos_config_set_http_listen_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_document_root(const char *val) { mgos_config_set_http_document_root(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_cert(const char *val) { mgos_config_set_http_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_key(const char *val) { mgos_config_set_http_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_ca_cert(const char *val) { mgos_config_set_http_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_upload_acl(const char *val) { mgos_config_set_http_upload_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_hidden_files(const char *val) { mgos_config_set_http_hidden_files(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_auth_domain(const char *val) { mgos_config_set_http_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_auth_file(const char *val) { mgos_config_set_http_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_enable(int         val) { mgos_config_set_rpc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_frame_size(int         val) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_queue_length(int         val) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int         val) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_acl_file(const char *val) { mgos_config_set_rpc_acl_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_domain(const char *val) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_file(const char *val) { mgos_config_set_rpc_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_enable(int         val) { mgos_config_set_rpc_ws_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_server_address(const char *val) { mgos_config_set_rpc_ws_server_address(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_min(int         val) { mgos_config_set_rpc_ws_reconnect_interval_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_max(int         val) { mgos_config_set_rpc_ws_reconnect_interval_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_server_name(const char *val) { mgos_config_set_rpc_ws_ssl_server_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_ca_file(const char *val) { mgos_config_set_rpc_ws_ssl_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_client_cert_file(const char *val) { mgos_config_set_rpc_ws_ssl_client_cert_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_gatts_enable(int         val) { mgos_config_set_rpc_gatts_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_gatts_is_trusted(int         val) { mgos_config_set_rpc_gatts_is_trusted(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_enable(int         val) { mgos_config_set_rpc_mqtt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_topic(const char *val) { mgos_config_set_rpc_mqtt_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_is_trusted(int         val) { mgos_config_set_rpc_mqtt_is_trusted(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_uart_no(int         val) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int         val) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_fc_type(int         val) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_wait_for_start_frame(int         val) { mgos_config_set_rpc_uart_wait_for_start_frame(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_enable(int         val) { mgos_config_set_dash_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_token(const char *val) { mgos_config_set_dash_token(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_server(const char *val) { mgos_config_set_dash_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_ca_file(const char *val) { mgos_config_set_dash_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_heartbeat_interval(int         val) { mgos_config_set_dash_heartbeat_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_send_logs(int         val) { mgos_config_set_dash_send_logs(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_enable(int         val) { mgos_config_set_dns_sd_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_host_name(const char *val) { mgos_config_set_dns_sd_host_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_txt(const char *val) { mgos_config_set_dns_sd_txt(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_ttl(int         val) { mgos_config_set_dns_sd_ttl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_enable(int         val) { mgos_config_set_gcp_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_project(const char *val) { mgos_config_set_gcp_project(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_region(const char *val) { mgos_config_set_gcp_region(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_registry(const char *val) { mgos_config_set_gcp_registry(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_device(const char *val) { mgos_config_set_gcp_device(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_key(const char *val) { mgos_config_set_gcp_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_token_ttl(int         val) { mgos_config_set_gcp_token_ttl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mjs_generate_jsc(int         val) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_enable(int         val) { mgos_config_set_pppos_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_uart_no(int         val) { mgos_config_set_pppos_uart_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_baud_rate(int         val) { mgos_config_set_pppos_baud_rate(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_fc_enable(int         val) { mgos_config_set_pppos_fc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_apn(const char *val) { mgos_config_set_pppos_apn(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_user(const char *val) { mgos_config_set_pppos_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_pass(const char *val) { mgos_config_set_pppos_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_connect_cmd(const char *val) { mgos_config_set_pppos_connect_cmd(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_echo_interval(int         val) { mgos_config_set_pppos_echo_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_echo_fails(int         val) { mgos_config_set_pppos_echo_fails(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pppos_hexdump_enable(int         val) { mgos_config_set_pppos_hexdump_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_enable(int         val) { mgos_config_set_spi_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_debug(int         val) { mgos_config_set_spi_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_unit_no(int         val) { mgos_config_set_spi_unit_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_miso_gpio(int         val) { mgos_config_set_spi_miso_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_mosi_gpio(int         val) { mgos_config_set_spi_mosi_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_sclk_gpio(int         val) { mgos_config_set_spi_sclk_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs0_gpio(int         val) { mgos_config_set_spi_cs0_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs1_gpio(int         val) { mgos_config_set_spi_cs1_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs2_gpio(int         val) { mgos_config_set_spi_cs2_gpio(&mgos_sys_config, val); }


const struct mgos_conf_entry *mgos_config_schema();

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_CONFIG_H_ */
