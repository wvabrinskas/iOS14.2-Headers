/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject {

	NSURLSessionTaskDependencyDescription* _taskDependencyDescription;
	NSURLSessionTask* _parentTask;
	NSURLSessionTask* _mainDocumentTask;

}

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * taskDependencyDescription;              //@synthesize taskDependencyDescription=_taskDependencyDescription - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * parentTask;                                         //@synthesize parentTask=_parentTask - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * mainDocumentTask;                                   //@synthesize mainDocumentTask=_mainDocumentTask - In the implementation block
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
-(NSURLSessionTask *)parentTask;
-(id)init;
-(NSURLSessionTaskDependencyDescription *)taskDependencyDescription;
-(NSURLSessionTask *)mainDocumentTask;
-(void)setTaskDependencyDescription:(NSURLSessionTaskDependencyDescription *)arg1 ;
-(void)dealloc;
@end

