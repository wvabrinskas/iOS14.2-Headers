/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBSXPCDecoding <NSObject>
@required
-(BOOL)decodeBoolForKey:(id)arg1;
-(BOOL)containsValueForKey:(id)arg1;
-(double)decodeDoubleForKey:(id)arg1;
-(long long)decodeInt64ForKey:(id)arg1;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
-(unsigned long long)decodeUInt64ForKey:(id)arg1;
-(id)decodeStringForKey:(id)arg1;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
-(id)decodeXPCObjectOfType:(const xpc_type_sRef)arg1 forKey:(id)arg2;

@end
