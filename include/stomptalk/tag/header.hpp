#pragma once

#include "stomptalk/header.h"
#include "stomptalk/fnv1a.hpp"
#include <string_view>
#include <cstdint>

namespace stomptalk {
namespace header {
namespace tag {

// generated by stomptalkgen.js 2022-03-15T15:40:35.843Z
using namespace std::literals;

struct accept_version {
	constexpr static auto num = 0;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\naccept-version:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<accept_version, st_header_accept_version>::value;

	constexpr static auto header_v12() noexcept {
		return "\naccept-version:1.2"sv;
	}
	constexpr static auto v12() noexcept {
		return header_v12().substr(header_size);
	}
};

struct ack {
	constexpr static auto num = accept_version::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nack:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<ack, st_header_ack>::value;

	constexpr static auto header_client() noexcept {
		return "\nack:client"sv;
	}
	constexpr static auto client() noexcept {
		return header_client().substr(header_size);
	}
	constexpr static auto header_client_individual() noexcept {
		return "\nack:client-individual"sv;
	}
	constexpr static auto client_individual() noexcept {
		return header_client_individual().substr(header_size);
	}
};

struct amqp_message_id {
	constexpr static auto num = ack::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\namqp-message-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<amqp_message_id, st_header_amqp_message_id>::value;
};

struct amqp_type {
	constexpr static auto num = amqp_message_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\namqp_type:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<amqp_type, st_header_amqp_type>::value;
};

struct app_id {
	constexpr static auto num = amqp_type::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\napp-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<app_id, st_header_app_id>::value;
};

struct auto_delete {
	constexpr static auto num = app_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nauto_delete:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<auto_delete, st_header_auto_delete>::value;
};

struct cluster_id {
	constexpr static auto num = auto_delete::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ncluster-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<cluster_id, st_header_cluster_id>::value;
};

struct content_encoding {
	constexpr static auto num = cluster_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ncontent-encoding:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<content_encoding, st_header_content_encoding>::value;

	constexpr static auto header_identity() noexcept {
		return "\ncontent-encoding:identity"sv;
	}
	constexpr static auto identity() noexcept {
		return header_identity().substr(header_size);
	}
	constexpr static auto header_deflate() noexcept {
		return "\ncontent-encoding:deflate"sv;
	}
	constexpr static auto deflate() noexcept {
		return header_deflate().substr(header_size);
	}
	constexpr static auto header_compress() noexcept {
		return "\ncontent-encoding:compress"sv;
	}
	constexpr static auto compress() noexcept {
		return header_compress().substr(header_size);
	}
	constexpr static auto header_gzip() noexcept {
		return "\ncontent-encoding:gzip"sv;
	}
	constexpr static auto gzip() noexcept {
		return header_gzip().substr(header_size);
	}
	constexpr static auto header_x_gzip() noexcept {
		return "\ncontent-encoding:x-gzip"sv;
	}
	constexpr static auto x_gzip() noexcept {
		return header_x_gzip().substr(header_size);
	}
	constexpr static auto header_br() noexcept {
		return "\ncontent-encoding:br"sv;
	}
	constexpr static auto br() noexcept {
		return header_br().substr(header_size);
	}
};

struct content_length {
	constexpr static auto num = content_encoding::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ncontent-length:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<content_length, st_header_content_length>::value;
};

struct content_type {
	constexpr static auto num = content_length::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ncontent-type:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<content_type, st_header_content_type>::value;

	constexpr static auto header_text_xml() noexcept {
		return "\ncontent-type:text/xml"sv;
	}
	constexpr static auto text_xml() noexcept {
		return header_text_xml().substr(header_size);
	}
	constexpr static auto header_text_html() noexcept {
		return "\ncontent-type:text/html"sv;
	}
	constexpr static auto text_html() noexcept {
		return header_text_html().substr(header_size);
	}
	constexpr static auto header_text_plain() noexcept {
		return "\ncontent-type:text/plain"sv;
	}
	constexpr static auto text_plain() noexcept {
		return header_text_plain().substr(header_size);
	}
	constexpr static auto header_application_xml() noexcept {
		return "\ncontent-type:application/xml"sv;
	}
	constexpr static auto application_xml() noexcept {
		return header_application_xml().substr(header_size);
	}
	constexpr static auto header_application_json() noexcept {
		return "\ncontent-type:application/json"sv;
	}
	constexpr static auto application_json() noexcept {
		return header_application_json().substr(header_size);
	}
	constexpr static auto header_application_octet_stream() noexcept {
		return "\ncontent-type:application/octet-stream"sv;
	}
	constexpr static auto application_octet_stream() noexcept {
		return header_application_octet_stream().substr(header_size);
	}
};

struct correlation_id {
	constexpr static auto num = content_type::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ncorrelation-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<correlation_id, st_header_correlation_id>::value;
};

struct delivery_mode {
	constexpr static auto num = correlation_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ndelivery-mode:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<delivery_mode, st_header_delivery_mode>::value;
};

struct destination {
	constexpr static auto num = delivery_mode::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ndestination:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<destination, st_header_destination>::value;
};

struct durable {
	constexpr static auto num = destination::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ndurable:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<durable, st_header_durable>::value;
};

struct expiration {
	constexpr static auto num = durable::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nexpiration:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<expiration, st_header_expiration>::value;
};

struct expires {
	constexpr static auto num = expiration::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nexpires:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<expires, st_header_expires>::value;
};

struct heart_beat {
	constexpr static auto num = expires::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nheart-beat:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<heart_beat, st_header_heart_beat>::value;
};

struct host {
	constexpr static auto num = heart_beat::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nhost:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<host, st_header_host>::value;
};

struct id {
	constexpr static auto num = host::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nid:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<id, st_header_id>::value;
};

struct login {
	constexpr static auto num = id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nlogin:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<login, st_header_login>::value;
};

struct message {
	constexpr static auto num = login::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nmessage:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<message, st_header_message>::value;
};

struct message_id {
	constexpr static auto num = message::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nmessage-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<message_id, st_header_message_id>::value;
};

struct passcode {
	constexpr static auto num = message_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\npasscode:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<passcode, st_header_passcode>::value;
};

struct persistent {
	constexpr static auto num = passcode::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\npersistent:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<persistent, st_header_persistent>::value;

	constexpr static auto header_enable() noexcept {
		return "\npersistent:true"sv;
	}
	constexpr static auto enable() noexcept {
		return header_enable().substr(header_size);
	}
	constexpr static auto header_disable() noexcept {
		return "\npersistent:false"sv;
	}
	constexpr static auto disable() noexcept {
		return header_disable().substr(header_size);
	}
};

struct prefetch_count {
	constexpr static auto num = persistent::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nprefetch-count:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<prefetch_count, st_header_prefetch_count>::value;
};

struct priority {
	constexpr static auto num = prefetch_count::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\npriority:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<priority, st_header_priority>::value;
};

struct receipt {
	constexpr static auto num = priority::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nreceipt:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<receipt, st_header_receipt>::value;
};

struct receipt_id {
	constexpr static auto num = receipt::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nreceipt-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<receipt_id, st_header_receipt_id>::value;
};

struct redelivered {
	constexpr static auto num = receipt_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nredelivered:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<redelivered, st_header_redelivered>::value;
};

struct reply_to {
	constexpr static auto num = redelivered::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nreply-to:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<reply_to, st_header_reply_to>::value;
};

struct requeue {
	constexpr static auto num = reply_to::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nrequeue:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<requeue, st_header_requeue>::value;
};

struct server {
	constexpr static auto num = requeue::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nserver:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<server, st_header_server>::value;
};

struct session {
	constexpr static auto num = server::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nsession:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<session, st_header_session>::value;
};

struct subscription {
	constexpr static auto num = session::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nsubscription:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<subscription, st_header_subscription>::value;
};

struct timestamp {
	constexpr static auto num = subscription::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ntimestamp:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<timestamp, st_header_timestamp>::value;
};

struct transaction {
	constexpr static auto num = timestamp::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\ntransaction:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<transaction, st_header_transaction>::value;
};

struct user_id {
	constexpr static auto num = transaction::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nuser-id:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<user_id, st_header_user_id>::value;
};

struct version {
	constexpr static auto num = user_id::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nversion:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<version, st_header_version>::value;

	constexpr static auto header_v12() noexcept {
		return "\nversion:1.2"sv;
	}
	constexpr static auto v12() noexcept {
		return header_v12().substr(header_size);
	}
};

struct dead_letter_exchange {
	constexpr static auto num = version::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-dead-letter-exchange:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<dead_letter_exchange, st_header_dead_letter_exchange>::value;
};

struct dead_letter_routing_key {
	constexpr static auto num = dead_letter_exchange::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-dead-letter-routing-key:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<dead_letter_routing_key, st_header_dead_letter_routing_key>::value;
};

struct max_length {
	constexpr static auto num = dead_letter_routing_key::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-max-length:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<max_length, st_header_max_length>::value;
};

struct max_length_bytes {
	constexpr static auto num = max_length::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-max-length-bytes:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<max_length_bytes, st_header_max_length_bytes>::value;
};

struct max_priority {
	constexpr static auto num = max_length_bytes::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-max-priority:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<max_priority, st_header_max_priority>::value;
};

struct message_ttl {
	constexpr static auto num = max_priority::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-message-ttl:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<message_ttl, st_header_message_ttl>::value;
};

struct original_exchange {
	constexpr static auto num = message_ttl::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-original-exchange:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<original_exchange, st_header_original_exchange>::value;
};

struct original_routing_key {
	constexpr static auto num = original_exchange::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-original-routing-key:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<original_routing_key, st_header_original_routing_key>::value;
};

struct queue_name {
	constexpr static auto num = original_routing_key::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-queue-name:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<queue_name, st_header_queue_name>::value;
};

struct queue_type {
	constexpr static auto num = queue_name::num + 1;
	constexpr static auto mask = 1ull << num;
	constexpr static auto header = "\nx-queue-type:"sv;
	constexpr static auto header_size = header.size();
	constexpr static auto text = header.substr(1, header_size - 2);
	constexpr static auto text_size = text.size();
	constexpr static auto text_hash = static_hash<queue_type, st_header_queue_type>::value;
};

constexpr static auto count = queue_type::num + 1;

}
}
}
