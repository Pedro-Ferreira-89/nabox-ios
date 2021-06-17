//
//  CVETHABIArgument.h
//  CVETHWallet
//
//  Created by coin on 06/09/2019.
//  Copyright © 2019 coin. All rights reserved.
//

//https://solidity.readthedocs.io/en/v0.5.3/abi-spec.html

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CVETHABIArgument : NSObject

/**
 encode to bytes
 */
+(NSString *)functionsSelectorHash:(NSString *)_function;
+(NSString *)argumentWithPadding:(NSString *)_arg;
+(NSString *)argumentWithRearPadding:(NSString *)_arg;

+(NSString *)getLocationArgNum:(int)_num;

+(NSString *)fromAddress:(NSString *)_addressArg;
+(NSString *)fromInt:(NSString *)_intArg;
+(NSString *)fromBool:(nullable NSString *)_boolArg;
+(NSString *)fromBytes:(NSString *)_bytesArg;
+(NSString *)fromString:(NSString *)_stringArg;
+(NSString *)fromDataNoLength:(NSData *)_data; //for bytes32

/**
 decode from bytes
 */
+(NSString *)toInt:(NSString *)_resultArg;
+(NSString *)toAddress:(NSString *)_resultArg;
+(BOOL)toBool:(NSString *)_resultArg;
+(NSString *)toBytes:(NSString *)_resultArg;
+(NSString *)toString:(NSString *)_resultArg;
@end

NS_ASSUME_NONNULL_END
