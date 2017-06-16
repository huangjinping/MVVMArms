//
//  HJPViewProtocol.h
//  MVVMArms
//
//  Created by harris.huang on 2017/6/16.
//  Copyright © 2017年 com.harrishuang. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol HJPViewProtocol <NSObject>

（void）hjp_bindViewModel;
 (void)hjp_addSubViews;
 (void)hjp_layoutNavigaction;
 (void)hjp_getNewData;
 (void)recoverKeyboard;

@end
