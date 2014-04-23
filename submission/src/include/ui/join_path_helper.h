/*
 * join_path_helper.h
 *
 *  Created on: 2014-04-09
 *      Author: jmate
 */

#ifndef JOIN_PATH_HELPER_H_
#define JOIN_PATH_HELPER_H_

#include "ui/optimizer_ui_structs.h"

MergePath* recreate_mergejoin_path(PathWrapperTree* pwt) ;
HashPath* recreate_hashjoin_path(PathWrapperTree* pwt) ;
NestPath* recreate_nlj_path(PathWrapperTree* pwt) ;

#endif /* JOIN_PATH_HELPER_H_ */