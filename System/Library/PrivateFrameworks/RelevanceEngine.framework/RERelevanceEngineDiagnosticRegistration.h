/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RESingleton.h>

@interface RERelevanceEngineDiagnosticRegistration : RESingleton {

	BOOL _supportsRegistration;

}
-(id)_init;
-(void)checkinEngine:(id)arg1 ;
-(id)_defaultRegistrationDirectory;
-(id)_processesFileURL;
-(id)_allProcesses;
-(void)_accessEngineDataForProcess:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAvailableEngines:(/*^block*/id)arg1 ;
@end

