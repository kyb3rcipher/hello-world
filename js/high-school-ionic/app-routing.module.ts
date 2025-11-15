import { NgModule } from '@angular/core';
import { PreloadAllModules, RouterModule, Routes } from '@angular/router';

const routes: Routes = [
  {
    path: '',
    redirectTo: 'home',
    pathMatch: 'full'
  },
  {
    path: 'home',
    loadChildren: () => import('./home/home.module').then( m => m.HomePageModule)
  },
  {
    path: 'exercise1',
    loadChildren: () => import('./exercise1/exercise1.module').then( m => m.Exercise1PageModule)
  },
  {
    path: 'exercise1-page2',
    loadChildren: () => import('./exercise1-page2/exercise1-page2.module').then( m => m.Exercise1Page2PageModule)
  },
  {
    path: 'exercise2',
    loadChildren: () => import('./exercise2/exercise2.module').then( m => m.Exercise2PageModule)
  },
  {
    path: 'exercise3',
    loadChildren: () => import('./exercise3/exercise3.module').then( m => m.Exercise3PageModule)
  },
  {
    path: 'exercise4',
    loadChildren: () => import('./exercise4/exercise4.module').then( m => m.Exercise4PageModule)
  },
  {
    path: 'exercise5',
    loadChildren: () => import('./exercise5/exercise5.module').then( m => m.Exercise5PageModule)
  },
  {
    path: 'exercise6',
    loadChildren: () => import('./exercise6/exercise6.module').then( m => m.Exercise6PageModule)
  },
  {
    path: 'exercise7',
    loadChildren: () => import('./exercise7/exercise7.module').then( m => m.Exercise7PageModule)
  },
  {
    path: 'exercise8',
    loadChildren: () => import('./exercise8/exercise8.module').then( m => m.Exercise8PageModule)
  },
];

@NgModule({
  imports: [
    RouterModule.forRoot(routes, { preloadingStrategy: PreloadAllModules })
  ],
  exports: [RouterModule]
})
export class AppRoutingModule { }
