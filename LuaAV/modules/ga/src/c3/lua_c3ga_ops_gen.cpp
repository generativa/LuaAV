// THIS FILE GENERATED AUTOMATICALLY, DO NOT EDIT
#include "lua_c3ga.h"

#ifdef __cplusplus
extern "C" {
#endif




int c3space_add(lua_State *L) {
	double d1, d2;
	C3Tag tag1;
	C3Tag tag2;
	C3Elem *elem1 = Glue<C3Elem>::to(L, 1);
	C3Elem *elem2 = Glue<C3Elem>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (C3Elem *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.add: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (C3Elem *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.add: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((mv *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			VECTORE3GA_TAG,
			new vectorE3GA(
				add(*((e1_t *)elem1->elem), *((e2_t *)elem2->elem))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				add(*((I5_t *)elem1->elem), *((circle *)elem2->elem))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			VECTORE3GA_TAG,
			new vectorE3GA(
				add(*((vectorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			NORMALIZEDPOINT_TAG,
			new normalizedPoint(
				add(*((vectorE3GA *)elem1->elem), *((normalizedPoint *)elem2->elem))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			DUALSPHERE_TAG,
			new dualSphere(
				add(*((vectorE3GA *)elem1->elem), *((dualSphere *)elem2->elem))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			BIVECTORE3GA_TAG,
			new bivectorE3GA(
				add(*((bivectorE3GA *)elem1->elem), *((bivectorE3GA *)elem2->elem))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pointPair *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			CIRCLE_TAG,
			new circle(
				add(*((line *)elem1->elem), *((circle *)elem2->elem))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				add(*((circle *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PLANE_TAG,
			new plane(
				add(*((plane *)elem1->elem), *((plane *)elem2->elem))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((normalizedTranslator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case TRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((translator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case RBM_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((RBM *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case EVENVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				add(*((evenVersor *)elem1->elem), *((evenVersor *)elem2->elem))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((evenVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ODDVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(mv(*((oddVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DOUBLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	/*Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				add(*((double *)elem1), *((double *)elem2))
			)
		)
	);
	*/
break;
}
break;
}
return 1;

}



int c3space_subtract(lua_State *L) {
	double d1, d2;
	C3Tag tag1;
	C3Tag tag2;
	C3Elem *elem1 = Glue<C3Elem>::to(L, 1);
	C3Elem *elem2 = Glue<C3Elem>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (C3Elem *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.subtract: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (C3Elem *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.subtract: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((mv *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				subtract(*((I5_t *)elem1->elem), *((circle *)elem2->elem))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			VECTORE3GA_TAG,
			new vectorE3GA(
				subtract(*((vectorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			BIVECTORE3GA_TAG,
			new bivectorE3GA(
				subtract(*((bivectorE3GA *)elem1->elem), *((bivectorE3GA *)elem2->elem))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				subtract(*((rotorE3GA *)elem1->elem), *((noni_t *)elem2->elem))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ROTORE3GA_TAG,
			new rotorE3GA(
				subtract(*((rotorE3GA *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pointPair *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				subtract(*((line *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((normalizedTranslator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case TRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((translator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case RBM_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((RBM *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case EVENVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				subtract(*((evenVersor *)elem1->elem), *((evenVersor *)elem2->elem))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((evenVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ODDVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				subtract(*((oddVersor *)elem1->elem), *((oddVersor *)elem2->elem))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(mv(*((oddVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DOUBLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	/*Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				subtract(*((double *)elem1), *((double *)elem2))
			)
		)
	);
	*/
break;
}
break;
}
return 1;

}



int c3space_hip(lua_State *L) {
	double d1, d2;
	C3Tag tag1;
	C3Tag tag2;
	C3Elem *elem1 = Glue<C3Elem>::to(L, 1);
	C3Elem *elem2 = Glue<C3Elem>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (C3Elem *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.hip: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (C3Elem *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.hip: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((mv *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
				lua::push<double>(
					L, 
					hip(*((ni_t *)elem1->elem), *((normalizedPoint *)elem2->elem))
				);
			
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PLANE_TAG,
			new plane(
				hip(*((I5i_t *)elem1->elem), *((ni_t *)elem2->elem))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			LINE_TAG,
			new line(
				hip(*((I5i_t *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
				lua::push<double>(
					L, 
					hip(*((vectorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
				);
			
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			LINE_TAG,
			new line(
				hip(*((vectorE3GA *)elem1->elem), *((plane *)elem2->elem))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
				lua::push<double>(
					L, 
					hip(*((rotorE3GA *)elem1->elem), *((bivectorE3GA *)elem2->elem))
				);
			
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pointPair *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((normalizedTranslator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case TRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((translator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case RBM_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((RBM *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case EVENVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((evenVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ODDVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				hip(*((oddVersor *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				hip(*((oddVersor *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(mv(*((oddVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DOUBLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				hip(*((double *)elem1), *((double *)elem2))
			)
		)
	);
break;
}
break;
}
return 1;

}



int c3space_mhip(lua_State *L) {
	double d1, d2;
	C3Tag tag1;
	C3Tag tag2;
	C3Elem *elem1 = Glue<C3Elem>::to(L, 1);
	C3Elem *elem2 = Glue<C3Elem>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (C3Elem *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.mhip: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (C3Elem *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.mhip: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((mv *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
				lua::push<double>(
					L, 
					mhip(*((no_t *)elem1->elem), *((e1_t *)elem2->elem))
				);
			
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			DUALSPHERE_TAG,
			new dualSphere(
				mhip(*((no_t *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			FLATPOINT_TAG,
			new flatPoint(
				mhip(*((vectorE3GA *)elem1->elem), *((line *)elem2->elem))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			VECTORE3GA_TAG,
			new vectorE3GA(
				mhip(*((bivectorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				mhip(*((rotorE3GA *)elem1->elem), *((pseudoscalar *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pointPair *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PLANE_TAG,
			new plane(
				mhip(*((pseudoscalar *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((normalizedTranslator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case TRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((translator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case RBM_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((RBM *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case EVENVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((evenVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ODDVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				mhip(*((oddVersor *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(mv(*((oddVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DOUBLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				mhip(*((double *)elem1), *((double *)elem2))
			)
		)
	);
break;
}
break;
}
return 1;

}



int c3space_op(lua_State *L) {
	double d1, d2;
	C3Tag tag1;
	C3Tag tag2;
	C3Elem *elem1 = Glue<C3Elem>::to(L, 1);
	C3Elem *elem2 = Glue<C3Elem>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (C3Elem *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.op: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (C3Elem *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.op: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((mv *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			NONI_TAG,
			new noni_t(
				op(*((no_t *)elem1->elem), *((ni_t *)elem2->elem))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			FLATPOINT_TAG,
			new flatPoint(
				op(*((ni_t *)elem1->elem), *((no_t *)elem2->elem))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			BIVECTORE3GA_TAG,
			new bivectorE3GA(
				op(*((vectorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				op(*((vectorE3GA *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PLANE_TAG,
			new plane(
				op(*((vectorE3GA *)elem1->elem), *((line *)elem2->elem))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
				lua::push<double>(
					L, 
					op(*((bivectorE3GA *)elem1->elem), *((bivectorE3GA *)elem2->elem))
				);
			
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				op(*((rotorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ROTORE3GA_TAG,
			new rotorE3GA(
				op(*((rotorE3GA *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				op(*((rotorE3GA *)elem1->elem), *((circle *)elem2->elem))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pointPair *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PSEUDOSCALAR_TAG,
			new pseudoscalar(
				op(*((circle *)elem1->elem), *((pointPair *)elem2->elem))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PLANE_TAG,
			new plane(
				op(*((plane *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
				lua::push<double>(
					L, 
					op(*((pseudoscalar *)elem1->elem), *((oddVersor *)elem2->elem))
				);
			
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((normalizedTranslator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case TRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((translator *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case RBM_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((RBM *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case EVENVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((evenVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ODDVERSOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(mv(*((oddVersor *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DOUBLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	/*Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				op(*((double *)elem1), *((double *)elem2))
			)
		)
	);
	*/
break;
}
break;
}
return 1;

}



int c3space_gp(lua_State *L) {
	double d1, d2;
	C3Tag tag1;
	C3Tag tag2;
	C3Elem *elem1 = Glue<C3Elem>::to(L, 1);
	C3Elem *elem2 = Glue<C3Elem>::to(L, 2);
	
	
	if(!elem1) {
		if(lua::is<double>(L, 1)) {
			d1 = lua::to<double>(L, 1);
			elem1 = (C3Elem *)(&d1);
			tag1 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.gp: invalid arguments");
		}
	}
	else {
		tag1 = elem1->tag;
	}
	
	if(!elem2) {
		if(lua::is<double>(L, 2)) {
			d2 = lua::to<double>(L, 2);
			elem2 = (C3Elem *)(&d2);
			tag2 = DOUBLE_TAG;
		}
		else {
			luaL_error(L, "c3.gp: invalid arguments");
		}
	}
	else {
		tag2 = elem2->tag;
	}
	
switch(tag1) {
case MV_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(*((mv *)elem1->elem), *((mv *)elem2->elem))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((mv *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(*((mv *)elem1->elem), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NO_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				gp(*((no_t *)elem1->elem), *((ni_t *)elem2->elem))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((no_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E1_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			BIVECTORE3GA_TAG,
			new bivectorE3GA(
				gp(*((e1_t *)elem1->elem), *((e2_t *)elem2->elem))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e1_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E2_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e2_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case E3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			FREEVECTOR_TAG,
			new freeVector(
				gp(*((e3_t *)elem1->elem), *((ni_t *)elem2->elem))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			PLANE_TAG,
			new plane(
				gp(*((e3_t *)elem1->elem), *((I5i_t *)elem2->elem))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((e3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((ni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NONI_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((noni_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I3_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I3_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case I5i_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((I5i_t *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case VECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ROTORE3GA_TAG,
			new rotorE3GA(
				gp(*((vectorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				gp(*((vectorE3GA *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((vectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case BIVECTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ROTORE3GA_TAG,
			new rotorE3GA(
				gp(*((bivectorE3GA *)elem1->elem), *((bivectorE3GA *)elem2->elem))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((bivectorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case ROTORE3GA_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				gp(*((rotorE3GA *)elem1->elem), *((vectorE3GA *)elem2->elem))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ROTORE3GA_TAG,
			new rotorE3GA(
				gp(*((rotorE3GA *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				gp(*((rotorE3GA *)elem1->elem), *((line *)elem2->elem))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((rotorE3GA *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				gp(*((normalizedPoint *)elem1->elem), *((normalizedPoint *)elem2->elem))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALSPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualSphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case DUALPLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((dualPlane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeVector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FREEBIVECTOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((freeBivector *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case FLATPOINT_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				gp(*((flatPoint *)elem1->elem), *((oddVersor *)elem2->elem))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((flatPoint *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case POINTPAIR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				gp(*((pointPair *)elem1->elem), *((pointPair *)elem2->elem))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pointPair *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			POINTPAIR_TAG,
			new pointPair(
				gp(*((pointPair *)elem1->elem), *((double *)elem2))
			)
		)
	);
break;
}
break;

case LINE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((line *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case CIRCLE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				gp(*((circle *)elem1->elem), *((line *)elem2->elem))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((circle *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case SPHERE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((sphere *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PLANE_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			EVENVERSOR_TAG,
			new evenVersor(
				gp(*((plane *)elem1->elem), *((rotorE3GA *)elem2->elem))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			ODDVERSOR_TAG,
			new oddVersor(
				gp(*((plane *)elem1->elem), *((oddVersor *)elem2->elem))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((plane *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case PSEUDOSCALAR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((noni_t *)elem2->elem)))
			)
		)
	);
break;

case I3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((I3_t *)elem2->elem)))
			)
		)
	);
break;

case I5_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5_t *)elem2->elem)))
			)
		)
	);
break;

case I5i_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((I5i_t *)elem2->elem)))
			)
		)
	);
break;

case VECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((vectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case BIVECTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((bivectorE3GA *)elem2->elem)))
			)
		)
	);
break;

case ROTORE3GA_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((rotorE3GA *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedPoint *)elem2->elem)))
			)
		)
	);
break;

case DUALSPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualSphere *)elem2->elem)))
			)
		)
	);
break;

case DUALPLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((dualPlane *)elem2->elem)))
			)
		)
	);
break;

case FREEVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeVector *)elem2->elem)))
			)
		)
	);
break;

case FREEBIVECTOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((freeBivector *)elem2->elem)))
			)
		)
	);
break;

case FLATPOINT_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((flatPoint *)elem2->elem)))
			)
		)
	);
break;

case POINTPAIR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((pointPair *)elem2->elem)))
			)
		)
	);
break;

case LINE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((line *)elem2->elem)))
			)
		)
	);
break;

case CIRCLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((circle *)elem2->elem)))
			)
		)
	);
break;

case SPHERE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((sphere *)elem2->elem)))
			)
		)
	);
break;

case PLANE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((plane *)elem2->elem)))
			)
		)
	);
break;

case PSEUDOSCALAR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((pseudoscalar *)elem2->elem)))
			)
		)
	);
break;

case NORMALIZEDTRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((normalizedTranslator *)elem2->elem)))
			)
		)
	);
break;

case TRANSLATOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((translator *)elem2->elem)))
			)
		)
	);
break;

case RBM_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((RBM *)elem2->elem)))
			)
		)
	);
break;

case EVENVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((evenVersor *)elem2->elem)))
			)
		)
	);
break;

case ODDVERSOR_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), mv(*((oddVersor *)elem2->elem)))
			)
		)
	);
break;

case DOUBLE_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((pseudoscalar *)elem1->elem)), *((double *)elem2))
			)
		)
	);
break;
}
break;

case NORMALIZEDTRANSLATOR_TAG:
switch(tag2) {
case MV_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedTranslator *)elem1->elem)), mv(*((mv *)elem2->elem)))
			)
		)
	);
break;

case NO_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedTranslator *)elem1->elem)), mv(*((no_t *)elem2->elem)))
			)
		)
	);
break;

case E1_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e1_t *)elem2->elem)))
			)
		)
	);
break;

case E2_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e2_t *)elem2->elem)))
			)
		)
	);
break;

case E3_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedTranslator *)elem1->elem)), mv(*((e3_t *)elem2->elem)))
			)
		)
	);
break;

case NI_TAG:
	Glue<C3Elem>::push(
		L, 
		new C3Elem(
			MV_TAG,
			new mv(
				gp(mv(*((normalizedTranslator *)elem1->elem)), mv(*((ni_t *)elem2->elem)))
			)
		)
	);
break;

case NONI_TAG:
		L, 
			)

