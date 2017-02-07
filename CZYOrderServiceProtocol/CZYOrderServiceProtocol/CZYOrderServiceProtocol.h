//
//  CZYOrderServiceProtocol.h
//  CZYOrderServiceProtocol
//
//  Created by 陈振洋 on 17/2/7.
//  Copyright © 2017年 czy. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CZYOrderServiceProtocol <NSObject>

- (UIViewController *)orderViewController:(NSString *)orderID sureComplete:(dispatch_block_t)sureComplete;

@end
