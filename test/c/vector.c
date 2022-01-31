#include <testutils.h>
#include <math.h>

void
vector_vec2_init(CuTest *tc)
{
	___SETUP___
	tsReal vec2[2];

	___GIVEN___
	vec2[0] = (tsReal) 0.0;
	vec2[1] = (tsReal) 0.0;

	___WHEN___
	ts_vec2_init(vec2, (tsReal) 1.0, (tsReal) 2.0);

	___THEN___
	CuAssertDblEquals(tc, 1.0, vec2[0], POINT_EPSILON);
	CuAssertDblEquals(tc, 2.0, vec2[1], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec2_set(CuTest *tc)
{
	___SETUP___
	const tsReal vals[2] = { (tsReal) 1.0,
		                 (tsReal) 2.0 };
	tsReal vec2[2];

	___GIVEN___
	vec2[0] = (tsReal) 0.0;
	vec2[1] = (tsReal) 0.0;

	___WHEN___
	ts_vec2_set(vec2, vals, 2);

	___THEN___
	CuAssertDblEquals(tc, vals[0], vec2[0], POINT_EPSILON);
	CuAssertDblEquals(tc, vals[1], vec2[1], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec2_set_ignore(CuTest *tc)
{
	___SETUP___
	const tsReal vals[5] = { (tsReal) 1.0,
		                 (tsReal) 2.0,
		                 (tsReal) 3.0,
		                 (tsReal) 4.0,
		                 (tsReal) 5.0 };
	tsReal vec2[5];

	___GIVEN___
	vec2[0] = (tsReal) 0.0;
	vec2[1] = (tsReal) 0.0;
	vec2[2] = (tsReal) 0.0;
	vec2[3] = (tsReal) 0.0;
	vec2[4] = (tsReal) 0.0;

	___WHEN___
	ts_vec2_set(vec2, vals, 5);

	___THEN___
	CuAssertDblEquals(tc, vals[0], vec2[0], POINT_EPSILON);
	CuAssertDblEquals(tc, vals[1], vec2[1], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec2[2], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec2[3], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec2[4], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec2_set_fill(CuTest *tc)
{
	___SETUP___
	const tsReal vals[1] = { (tsReal) 1.0 };
	tsReal vec2[5];

	___GIVEN___
	vec2[0] = (tsReal) -1.0;
	vec2[1] = (tsReal) -1.0;
	vec2[2] = (tsReal) -1.0;
	vec2[3] = (tsReal) -1.0;
	vec2[4] = (tsReal) -1.0;

	___WHEN___
	ts_vec2_set(vec2, vals, 1);

	___THEN___
	CuAssertDblEquals(tc, vals[0], vec2[0], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec2[1], POINT_EPSILON);
	/* Check for out-of-bounds */
	CuAssertDblEquals(tc, -1.0, vec2[2], POINT_EPSILON);
	CuAssertDblEquals(tc, -1.0, vec2[3], POINT_EPSILON);
	CuAssertDblEquals(tc, -1.0, vec2[4], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec3_set(CuTest *tc)
{
	___SETUP___
	const tsReal vals[3] = { (tsReal) 1.0,
		                 (tsReal) 2.0,
		                 (tsReal) 3.0 };
	tsReal vec3[3];

	___GIVEN___
	vec3[0] = (tsReal) 0.0;
	vec3[1] = (tsReal) 0.0;
	vec3[2] = (tsReal) 0.0;

	___WHEN___
	ts_vec3_set(vec3, vals, 3);

	___THEN___
	CuAssertDblEquals(tc, vals[0], vec3[0], POINT_EPSILON);
	CuAssertDblEquals(tc, vals[1], vec3[1], POINT_EPSILON);
	CuAssertDblEquals(tc, vals[2], vec3[2], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec3_set_ignore(CuTest *tc)
{
	___SETUP___
	const tsReal vals[5] = { (tsReal) 1.0,
		                 (tsReal) 2.0,
		                 (tsReal) 3.0,
		                 (tsReal) 4.0,
		                 (tsReal) 5.0 };
	tsReal vec3[5];

	___GIVEN___
	vec3[0] = (tsReal) 0.0;
	vec3[1] = (tsReal) 0.0;
	vec3[2] = (tsReal) 0.0;
	vec3[3] = (tsReal) 0.0;
	vec3[4] = (tsReal) 0.0;

	___WHEN___
	ts_vec3_set(vec3, vals, 5);

	___THEN___
	CuAssertDblEquals(tc, vals[0], vec3[0], POINT_EPSILON);
	CuAssertDblEquals(tc, vals[1], vec3[1], POINT_EPSILON);
	CuAssertDblEquals(tc, vals[2], vec3[2], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec3[3], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec3[4], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec3_set_fill(CuTest *tc)
{
	___SETUP___
	const tsReal vals[1] = { (tsReal) 1.0 };
	tsReal vec3[5];

	___GIVEN___
	vec3[0] = (tsReal) -1.0;
	vec3[1] = (tsReal) -1.0;
	vec3[2] = (tsReal) -1.0;
	vec3[3] = (tsReal) -1.0;
	vec3[4] = (tsReal) -1.0;

	___WHEN___
	ts_vec3_set(vec3, vals, 1);

	___THEN___
	CuAssertDblEquals(tc, vals[0], vec3[0], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec3[1], POINT_EPSILON);
	CuAssertDblEquals(tc, 0.0, vec3[2], POINT_EPSILON);
	/* Check for out-of-bounds */
	CuAssertDblEquals(tc, -1.0, vec3[3], POINT_EPSILON);
	CuAssertDblEquals(tc, -1.0, vec3[4], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec_mag_0_1(CuTest *tc)
{
	___SETUP___
	const tsReal vec[2] = { (tsReal) 0.0,
	                        (tsReal) 1.0 };
	tsReal mag;

	___GIVEN___
	mag = (tsReal) -1.0;

	___WHEN___
	mag = ts_vec_mag(vec, 2);

	___THEN___
	CuAssertDblEquals(tc, 1.0, mag, POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec_mag_2_3_4(CuTest *tc)
{
	___SETUP___
	const tsReal vec[3] = { (tsReal) 2.0,
		                (tsReal) 3.0,
		                (tsReal) 4.0 };
	tsReal mag;

	___GIVEN___
	mag = (tsReal) -1.0;

	___WHEN___
	mag = ts_vec_mag(vec, 3);

	___THEN___
	CuAssertDblEquals(tc,
	                  sqrt(2*2 + 3*3 + 4*4),
	                  mag, POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec_mag_dim_0(CuTest *tc)
{
	___SETUP___
	const tsReal vec[3] = { (tsReal) -1.0,
		                (tsReal) -1.0,
		                (tsReal) -1.0 };
	tsReal mag;

	___GIVEN___
	mag = (tsReal) -1.0;

	___WHEN___
	mag = ts_vec_mag(vec, 0);

	___THEN___
	CuAssertDblEquals(tc, 0.0, mag, POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec_norm_0(CuTest *tc)
{
	___SETUP___
	const tsReal vec[3] = { (tsReal) 0.0,
		                (tsReal) 0.0,
		                (tsReal) 0.0 };
	tsReal norm[5], dist;

	___GIVEN___
	norm[0] = (tsReal) -1.0;
	norm[1] = (tsReal) -1.0;
	norm[2] = (tsReal) -1.0;
	norm[3] = (tsReal) -1.0;
	norm[4] = (tsReal) -1.0;

	___WHEN___
	ts_vec_norm(vec, 3, norm);
	dist = ts_distance_varargs(tc, 3, norm, 0.0, 0.0, 0.0);

	___THEN___
	CuAssertDblEquals(tc, 0.0, dist, POINT_EPSILON);
	/* Check for out-of-bounds */
	CuAssertDblEquals(tc, -1.0, norm[3], POINT_EPSILON);
	CuAssertDblEquals(tc, -1.0, norm[4], POINT_EPSILON);

	___TEARDOWN___
}

void
vector_vec_sub_same(CuTest *tc)
{
	___SETUP___
	tsReal vec[5], dist;

	___GIVEN___
	vec[0] = (tsReal) 1.0;
	vec[1] = (tsReal) 2.0;
	vec[2] = (tsReal) 3.0;
	vec[3] = (tsReal) 4.0;
	vec[4] = (tsReal) 5.0;

	___WHEN___
	ts_vec_sub(vec, vec, 3, vec);
	dist = ts_distance_varargs(tc, 3, vec, 0.0, 0.0, 0.0);

	___THEN___
	CuAssertDblEquals(tc, 0.0, dist, POINT_EPSILON);
	/* Check for out-of-bounds */
	CuAssertDblEquals(tc, 4.0, vec[3], POINT_EPSILON);
	CuAssertDblEquals(tc, 5.0, vec[4], POINT_EPSILON);

	___TEARDOWN___
}

CuSuite *
get_vector_suite()
{
	CuSuite* suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, vector_vec2_init);
	SUITE_ADD_TEST(suite, vector_vec2_set);
	SUITE_ADD_TEST(suite, vector_vec2_set_ignore);
	SUITE_ADD_TEST(suite, vector_vec2_set_fill);
	SUITE_ADD_TEST(suite, vector_vec3_set);
	SUITE_ADD_TEST(suite, vector_vec3_set_ignore);
	SUITE_ADD_TEST(suite, vector_vec3_set_fill);
	SUITE_ADD_TEST(suite, vector_vec_mag_0_1);
	SUITE_ADD_TEST(suite, vector_vec_mag_2_3_4);
	SUITE_ADD_TEST(suite, vector_vec_mag_dim_0);
	SUITE_ADD_TEST(suite, vector_vec_norm_0);
	SUITE_ADD_TEST(suite, vector_vec_sub_same);
	return suite;
}
