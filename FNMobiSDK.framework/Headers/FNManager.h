//
//  FNManager.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNManager : NSObject

/// 初始化数据  didFinishLaunchingWithOptions中调用
+ (instancetype)shareFNManager;
@end

NS_ASSUME_NONNULL_END
