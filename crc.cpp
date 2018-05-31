/*
 * crc.c
 */

#include "crc.h"

const uint32_t crc_table[256] = {
#ifdef ARCH_LITTLE_ENDIAN
	0x00000000, 0xb71dc184, 0xd926438d, 0x6e3b8209,
	0x0550479e, 0xb24d861a, 0xdc760413, 0x6b6bc597,
	0xbdbd4fb8, 0x0aa08e3c, 0x649b0c35, 0xd386cdb1,
	0xb8ed0826, 0x0ff0c9a2, 0x61cb4bab, 0xd6d68a2f,
	0xcd665ef4, 0x7a7b9f70, 0x14401d79, 0xa35ddcfd,
	0xc836196a, 0x7f2bd8ee, 0x11105ae7, 0xa60d9b63,
	0x70db114c, 0xc7c6d0c8, 0xa9fd52c1, 0x1ee09345,
	0x758b56d2, 0xc2969756, 0xacad155f, 0x1bb0d4db,
	0x2dd07d6c, 0x9acdbce8, 0xf4f63ee1, 0x43ebff65,
	0x28803af2, 0x9f9dfb76, 0xf1a6797f, 0x46bbb8fb,
	0x906d32d4, 0x2770f350, 0x494b7159, 0xfe56b0dd,
	0x953d754a, 0x2220b4ce, 0x4c1b36c7, 0xfb06f743,
	0xe0b62398, 0x57abe21c, 0x39906015, 0x8e8da191,
	0xe5e66406, 0x52fba582, 0x3cc0278b, 0x8bdde60f,
	0x5d0b6c20, 0xea16ada4, 0x842d2fad, 0x3330ee29,
	0x585b2bbe, 0xef46ea3a, 0x817d6833, 0x3660a9b7,
	0x5aa0fbd8, 0xedbd3a5c, 0x8386b855, 0x349b79d1,
	0x5ff0bc46, 0xe8ed7dc2, 0x86d6ffcb, 0x31cb3e4f,
	0xe71db460, 0x500075e4, 0x3e3bf7ed, 0x89263669,
	0xe24df3fe, 0x5550327a, 0x3b6bb073, 0x8c7671f7,
	0x97c6a52c, 0x20db64a8, 0x4ee0e6a1, 0xf9fd2725,
	0x9296e2b2, 0x258b2336, 0x4bb0a13f, 0xfcad60bb,
	0x2a7bea94, 0x9d662b10, 0xf35da919, 0x4440689d,
	0x2f2bad0a, 0x98366c8e, 0xf60dee87, 0x41102f03,
	0x777086b4, 0xc06d4730, 0xae56c539, 0x194b04bd,
	0x7220c12a, 0xc53d00ae, 0xab0682a7, 0x1c1b4323,
	0xcacdc90c, 0x7dd00888, 0x13eb8a81, 0xa4f64b05,
	0xcf9d8e92, 0x78804f16, 0x16bbcd1f, 0xa1a60c9b,
	0xba16d840, 0x0d0b19c4, 0x63309bcd, 0xd42d5a49,
	0xbf469fde, 0x085b5e5a, 0x6660dc53, 0xd17d1dd7,
	0x07ab97f8, 0xb0b6567c, 0xde8dd475, 0x699015f1,
	0x02fbd066, 0xb5e611e2, 0xdbdd93eb, 0x6cc0526f,
	0x035d3635, 0xb440f7b1, 0xda7b75b8, 0x6d66b43c,
	0x060d71ab, 0xb110b02f, 0xdf2b3226, 0x6836f3a2,
	0xbee0798d, 0x09fdb809, 0x67c63a00, 0xd0dbfb84,
	0xbbb03e13, 0x0cadff97, 0x62967d9e, 0xd58bbc1a,
	0xce3b68c1, 0x7926a945, 0x171d2b4c, 0xa000eac8,
	0xcb6b2f5f, 0x7c76eedb, 0x124d6cd2, 0xa550ad56,
	0x73862779, 0xc49be6fd, 0xaaa064f4, 0x1dbda570,
	0x76d660e7, 0xc1cba163, 0xaff0236a, 0x18ede2ee,
	0x2e8d4b59, 0x99908add, 0xf7ab08d4, 0x40b6c950,
	0x2bdd0cc7, 0x9cc0cd43, 0xf2fb4f4a, 0x45e68ece,
	0x933004e1, 0x242dc565, 0x4a16476c, 0xfd0b86e8,
	0x9660437f, 0x217d82fb, 0x4f4600f2, 0xf85bc176,
	0xe3eb15ad, 0x54f6d429, 0x3acd5620, 0x8dd097a4,
	0xe6bb5233, 0x51a693b7, 0x3f9d11be, 0x8880d03a,
	0x5e565a15, 0xe94b9b91, 0x87701998, 0x306dd81c,
	0x5b061d8b, 0xec1bdc0f, 0x82205e06, 0x353d9f82,
	0x59fdcded, 0xeee00c69, 0x80db8e60, 0x37c64fe4,
	0x5cad8a73, 0xebb04bf7, 0x858bc9fe, 0x3296087a,
	0xe4408255, 0x535d43d1, 0x3d66c1d8, 0x8a7b005c,
	0xe110c5cb, 0x560d044f, 0x38368646, 0x8f2b47c2,
	0x949b9319, 0x2386529d, 0x4dbdd094, 0xfaa01110,
	0x91cbd487, 0x26d61503, 0x48ed970a, 0xfff0568e,
	0x2926dca1, 0x9e3b1d25, 0xf0009f2c, 0x471d5ea8,
	0x2c769b3f, 0x9b6b5abb, 0xf550d8b2, 0x424d1936,
	0x742db081, 0xc3307105, 0xad0bf30c, 0x1a163288,
	0x717df71f, 0xc660369b, 0xa85bb492, 0x1f467516,
	0xc990ff39, 0x7e8d3ebd, 0x10b6bcb4, 0xa7ab7d30,
	0xccc0b8a7, 0x7bdd7923, 0x15e6fb2a, 0xa2fb3aae,
	0xb94bee75, 0x0e562ff1, 0x606dadf8, 0xd7706c7c,
	0xbc1ba9eb, 0x0b06686f, 0x653dea66, 0xd2202be2,
	0x04f6a1cd, 0xb3eb6049, 0xddd0e240, 0x6acd23c4,
	0x01a6e653, 0xb6bb27d7, 0xd880a5de, 0x6f9d645a
#else
	0x00000000, 0x84c11db7, 0x8d4326d9, 0x09823b6e,
	0x9e475005, 0x1a864db2, 0x130476dc, 0x97c56b6b,
	0xb84fbdbd, 0x3c8ea00a, 0x350c9b64, 0xb1cd86d3,
	0x2608edb8, 0xa2c9f00f, 0xab4bcb61, 0x2f8ad6d6,
	0xf45e66cd, 0x709f7b7a, 0x791d4014, 0xfddc5da3,
	0x6a1936c8, 0xeed82b7f, 0xe75a1011, 0x639b0da6,
	0x4c11db70, 0xc8d0c6c7, 0xc152fda9, 0x4593e01e,
	0xd2568b75, 0x569796c2, 0x5f15adac, 0xdbd4b01b,
	0x6c7dd02d, 0xe8bccd9a, 0xe13ef6f4, 0x65ffeb43,
	0xf23a8028, 0x76fb9d9f, 0x7f79a6f1, 0xfbb8bb46,
	0xd4326d90, 0x50f37027, 0x59714b49, 0xddb056fe,
	0x4a753d95, 0xceb42022, 0xc7361b4c, 0x43f706fb,
	0x9823b6e0, 0x1ce2ab57, 0x15609039, 0x91a18d8e,
	0x0664e6e5, 0x82a5fb52, 0x8b27c03c, 0x0fe6dd8b,
	0x206c0b5d, 0xa4ad16ea, 0xad2f2d84, 0x29ee3033,
	0xbe2b5b58, 0x3aea46ef, 0x33687d81, 0xb7a96036,
	0xd8fba05a, 0x5c3abded, 0x55b88683, 0xd1799b34,
	0x46bcf05f, 0xc27dede8, 0xcbffd686, 0x4f3ecb31,
	0x60b41de7, 0xe4750050, 0xedf73b3e, 0x69362689,
	0xfef34de2, 0x7a325055, 0x73b06b3b, 0xf771768c,
	0x2ca5c697, 0xa864db20, 0xa1e6e04e, 0x2527fdf9,
	0xb2e29692, 0x36238b25, 0x3fa1b04b, 0xbb60adfc,
	0x94ea7b2a, 0x102b669d, 0x19a95df3, 0x9d684044,
	0x0aad2b2f, 0x8e6c3698, 0x87ee0df6, 0x032f1041,
	0xb4867077, 0x30476dc0, 0x39c556ae, 0xbd044b19,
	0x2ac12072, 0xae003dc5, 0xa78206ab, 0x23431b1c,
	0x0cc9cdca, 0x8808d07d, 0x818aeb13, 0x054bf6a4,
	0x928e9dcf, 0x164f8078, 0x1fcdbb16, 0x9b0ca6a1,
	0x40d816ba, 0xc4190b0d, 0xcd9b3063, 0x495a2dd4,
	0xde9f46bf, 0x5a5e5b08, 0x53dc6066, 0xd71d7dd1,
	0xf897ab07, 0x7c56b6b0, 0x75d48dde, 0xf1159069,
	0x66d0fb02, 0xe211e6b5, 0xeb93dddb, 0x6f52c06c,
	0x35365d03, 0xb1f740b4, 0xb8757bda, 0x3cb4666d,
	0xab710d06, 0x2fb010b1, 0x26322bdf, 0xa2f33668,
	0x8d79e0be, 0x09b8fd09, 0x003ac667, 0x84fbdbd0,
	0x133eb0bb, 0x97ffad0c, 0x9e7d9662, 0x1abc8bd5,
	0xc1683bce, 0x45a92679, 0x4c2b1d17, 0xc8ea00a0,
	0x5f2f6bcb, 0xdbee767c, 0xd26c4d12, 0x56ad50a5,
	0x79278673, 0xfde69bc4, 0xf464a0aa, 0x70a5bd1d,
	0xe760d676, 0x63a1cbc1, 0x6a23f0af, 0xeee2ed18,
	0x594b8d2e, 0xdd8a9099, 0xd408abf7, 0x50c9b640,
	0xc70cdd2b, 0x43cdc09c, 0x4a4ffbf2, 0xce8ee645,
	0xe1043093, 0x65c52d24, 0x6c47164a, 0xe8860bfd,
	0x7f436096, 0xfb827d21, 0xf200464f, 0x76c15bf8,
	0xad15ebe3, 0x29d4f654, 0x2056cd3a, 0xa497d08d,
	0x3352bbe6, 0xb793a651, 0xbe119d3f, 0x3ad08088,
	0x155a565e, 0x919b4be9, 0x98197087, 0x1cd86d30,
	0x8b1d065b, 0x0fdc1bec, 0x065e2082, 0x829f3d35,
	0xedcdfd59, 0x690ce0ee, 0x608edb80, 0xe44fc637,
	0x738aad5c, 0xf74bb0eb, 0xfec98b85, 0x7a089632,
	0x558240e4, 0xd1435d53, 0xd8c1663d, 0x5c007b8a,
	0xcbc510e1, 0x4f040d56, 0x46863638, 0xc2472b8f,
	0x19939b94, 0x9d528623, 0x94d0bd4d, 0x1011a0fa,
	0x87d4cb91, 0x0315d626, 0x0a97ed48, 0x8e56f0ff,
	0xa1dc2629, 0x251d3b9e, 0x2c9f00f0, 0xa85e1d47,
	0x3f9b762c, 0xbb5a6b9b, 0xb2d850f5, 0x36194d42,
	0x81b02d74, 0x057130c3, 0x0cf30bad, 0x8832161a,
	0x1ff77d71, 0x9b3660c6, 0x92b45ba8, 0x1675461f,
	0x39ff90c9, 0xbd3e8d7e, 0xb4bcb610, 0x307daba7,
	0xa7b8c0cc, 0x2379dd7b, 0x2afbe615, 0xae3afba2,
	0x75ee4bb9, 0xf12f560e, 0xf8ad6d60, 0x7c6c70d7,
	0xeba91bbc, 0x6f68060b, 0x66ea3d65, 0xe22b20d2,
	0xcda1f604, 0x4960ebb3, 0x40e2d0dd, 0xc423cd6a,
	0x53e6a601, 0xd727bbb6, 0xdea580d8, 0x5a649d6f
#endif
};

uint32_t crc_calc(const uint8_t *data, size_t len)
{
	uint32_t crc;

	crc = crc_init();

	while (((uintptr_t)data & 3) && len) {
		crc = crc_next(crc, *data++);
		len--;
	}

	while (len >= 16) {
		len -= 16;
		crc = crc_next4(crc, ((uint32_t *)data)[0]);
		crc = crc_next4(crc, ((uint32_t *)data)[1]);
		crc = crc_next4(crc, ((uint32_t *)data)[2]);
		crc = crc_next4(crc, ((uint32_t *)data)[3]);
		data += 16;
	}

	while (len--) {
		crc = crc_next(crc, *data++);
	}

	return crc_final(crc);
}