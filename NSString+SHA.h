//
//  NSString+SHA.h
//  常用的AES加解密
//
//  Created by swxa@sasaliubobo on 17/2/8.
//  Copyright © 2017年 swxa@saasliubobo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SHA)


-(NSString *) sha1;
-(NSString *) sha224;
-(NSString *) sha256;
-(NSString *) sha384;
-(NSString *) sha512;

@end
