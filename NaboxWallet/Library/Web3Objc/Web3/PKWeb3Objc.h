//
//  PKWeb3Objc.h
//  Web3Objc
//
//  Created by coin on 07/05/2020.
//  Copyright © 2020 coin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PKWeb3Eth.h"
#import "PKWeb3Utils.h"
#import "PKWeb3Crypto.h"

#import "NSDecimalNumber+MOD.h"

#import "NSData+CVETH.h"
#import "NSData+SECP256K1.h"

#import "NSMutableData+CVETH.h"

#import "NSString+CVETH.h"

#import "NSObject+CVETH.h"

NS_ASSUME_NONNULL_BEGIN

@interface PKWeb3Objc : NSObject

@property (nonatomic, retain) PKWeb3Eth *eth;
@property (nonatomic, retain) PKWeb3Utils *utils;
@property (nonatomic, retain) PKWeb3Crypto *crypto;

+ (PKWeb3Objc *)sharedInstance;
-(BOOL)setEndPoint:(NSString *)_endpoint AndChainID:(NSString *)_chainId;
@end

NS_ASSUME_NONNULL_END
