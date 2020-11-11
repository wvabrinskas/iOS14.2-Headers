/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLRegionsAgglomerativeClusteringDataVector : NSObject {

	double* _data;
	unsigned long long _length;
	id _userInfo;

}

@property (readonly) double* data;                           //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (retain) id userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
-(id)userInfo;
-(unsigned long long)length;
-(void)setUserInfo:(id)arg1 ;
-(double*)data;
-(void)dealloc;
-(id)initWithDataLength:(unsigned long long)arg1 ;
@end
