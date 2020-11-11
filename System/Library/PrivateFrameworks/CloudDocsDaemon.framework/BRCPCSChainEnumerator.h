/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class BRCPrivateClientZone, NSMutableArray, NSError;

@interface BRCPCSChainEnumerator : NSEnumerator {

	unsigned long long _maxPathDepth;
	BRCPrivateClientZone* _clientZone;
	NSMutableArray* _stack;
	NSError* _error;

}
-(id)nextObject;
-(id)error;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
@end
