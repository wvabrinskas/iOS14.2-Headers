/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNPrimitiveUserDefaults <NSObject>
@required
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2;
-(BOOL)synchronize;
-(void)primitiveRemoveObjectForKey:(id)arg1;
-(void)setupAutosync;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
-(id)primitiveObjectForKey:(id)arg1;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2;

@end
